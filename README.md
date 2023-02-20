# OpenMPI
A repository for OpenMPI builds

Use either RPM or Docker to deploy

## Docker
`sudo yum install docker`
`sudo systemctl start docker`

Install HPCCM by following the instructions on the HPCCM GitHub repository: https://github.com/NVIDIA/hpc-container-maker

Navigate to the 'Container' folder in this repository 

`sudo docker build -t openmpi .`

Once the installation process is done, run:

`sudo docker run -it --rm --net=host openmpi`

Inside the container environment, you can compile the sample program with:

`mpicc -o mpi_hello_world mpi_hello_world.c`

And then run with: 

`mpirun -n 4 --allow-run-as-root ./mpi_hello_world`
