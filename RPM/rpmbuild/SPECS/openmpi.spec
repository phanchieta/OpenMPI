%define __spec_install_pre /bin/true
%define  debug_package %{nil}

Name:           openmpi
Version:        4.1.4
Release:        1%{?dist}
Summary:        OpenMPI is a high-performance message passing library

License:        BSD
URL:            https://www.open-mpi.org/
Source0:        %{name}-%{version}.tar.gz

BuildRequires:  gcc
BuildRequires:  kernel-devel
BuildRequires:  hwloc-devel
BuildRequires:  libevent-devel
BuildRequires:  libibverbs-devel
BuildRequires:  librdmacm-devel
BuildRequires:  libibmad-devel
BuildRequires:  libibumad-devel
BuildRequires:  libibverbs-utils
BuildRequires:  librdmacm-utils
BuildRequires:  rdma-core-devel
BuildRequires:  ucx-devel

%description
OpenMPI is a high-performance message passing library that allows you to run MPI applications across multiple processors and compute nodes. This RPM includes libibverbs and UCX support

%prep
%autosetup -p1

%build
%configure --prefix=/users/jarbas/rpmbuild/BUILD --with-verbs --with-ucx
make %{?_smp_mflags}


%install
rm -rf $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT install


%files
%doc README COPYING
%{_bindir}/mpirun
%{_libdir}/libmpi.so.*
%{_libdir}/libibverbs.so.*
%{_libdir}/librdmacm.so.*
%{_libdir}/libucs.so.*
%{_libdir}/libucp.so.*

%changelog
* Mon Feb 20 2023 Pedro A <phanchieta@gmail.com> - 4.1.4-1
- Initial RPM release.