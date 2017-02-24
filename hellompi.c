#include "mpi.h"
#include <stdio.h>
int main(int argc,char *argv[]) {
	int numtasks, rank;
	char processor_name[MPI_MAX_PROCESSOR_NAME];
	int name_len;
	MPI_Status Stat;
	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Get_processor_name(processor_name, &name_len);
	printf("Hello from processor %s, task %d of %d, \n",
		processor_name, rank, numtasks);
	MPI_Finalize();
}

