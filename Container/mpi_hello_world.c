#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
  // Initialize MPI environment
  MPI_Init(&argc, &argv);

  // Get the rank of the current process
  int rank;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  // Print a message from each process
  printf("Hello, world! From process %d\n", rank);

  // Finalize MPI environment
  MPI_Finalize();
  return 0;
}
