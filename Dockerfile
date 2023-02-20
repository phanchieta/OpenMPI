# Start from the base CentOS 7.9 image
FROM centos:7.9.2009

# Install development tools and dependencies
RUN yum -y groupinstall "Development Tools" && \
    yum -y install epel-release && \
    yum -y install libibverbs libibverbs-devel librdmacm librdmacm-devel infiniband-diags rdma-core rdma-core-devel \
                   autoconf automake libtool numactl-devel hwloc-devel && \
    yum -y clean all

# Download and install UCX
RUN curl -OL https://github.com/openucx/ucx/releases/download/v1.14.0-rc1/ucx-1.14.0.tar.gz && \
    tar zxvf ucx-1.14.0.tar.gz && \
    cd ucx-1.14.0 && ./configure --prefix=/usr/local/ucx && make -j$(nproc) && make install && \
    cd .. && rm -rf ucx-1.14.0*

# Download and install OpenMPI with UCX and Infiniband support
RUN curl -OL https://download.open-mpi.org/release/open-mpi/v4.1/openmpi-4.1.4.tar.gz && \
    tar zxvf openmpi-4.1.4.tar.gz && \
    cd openmpi-4.1.4 && ./configure --prefix=/usr/local/openmpi --with-ucx=/usr/local/ucx  \
                                     --with-hwloc=/usr --with-libevent=internal --enable-mpi-cxx \
                                     --enable-mpi-ext=affinity,dpm,example,ft,io,mprobe,omp,pmix,pt2pt,rma,shmem,vers1 \
                                     && make -j$(nproc) && make install && \
    cd .. && rm -rf openmpi-4.1.4*

# Set the environment variables for OpenMPI
ENV PATH="/usr/local/openmpi/bin:${PATH}" \
    LD_LIBRARY_PATH="/usr/local/openmpi/lib:${LD_LIBRARY_PATH}"

# Print the OpenMPI version to verify the installation
RUN mpicc --version
