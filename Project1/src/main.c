/***************************************************************************

Author: nsaini
Created: 2018-04-12

***************************************************************************/





#include "common.h"




int main(int argc, char **argv)
{
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
    master = 0;

    if(myrank == master)
    {
	printf("---------------------------------------\n");
	printf("------------And so it begins-----------\n");
	printf("---------------------------------------\n");
    }
    int i,j,k;
    double time1 = MPI_Wtime();

    //------------------------------------------------------------------------//
    //Create necessary output directories//
    //Let only the master create directory
    if(myrank == master)
    {
	char* path;
	path = concat(getexepath(), "/output");
	mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	free(path);
    }
    //------------------------------------------------------------------------//

  
    //------------------------------------------------------------------------//
    //Read control file
    //All processors may read the control file
    control();
    if(myrank == master)printf("Read the input file\n\n");
    //------------------------------------------------------------------------//

    
    
    
    
    double time2 = MPI_Wtime();
    double secs = time2-time1;
    if(myrank == master)
    {
	printf("Total run time: %.6f secs\n",secs);
/*fprintf(out,"Total run time: %.6f secs\n",secs);
  fclose(out);*/
    }
    
    if(myrank == master)
    {
      printf("---------------------------------------\n");
      printf("-----------That's all folks!-----------\n");
      printf("---------------------------------------\n");
    }
    MPI_Finalize();
}
      