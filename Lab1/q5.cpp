// Write an openMP to print "Name and Register Number "  for k times using for loop 
//and compute the execution time of sequential and parallel run. 

#include<stdio.h>
#include<omp.h>
int main() {
    char name[] = "Karthik";
    int k = 2000;
    double serial_start_time = omp_get_wtime();
    for(int i = 0; i < k; i++) {
        printf("Name: %s\n",name);
    }
    double serial_end_time = omp_get_wtime();
    double parallel_start_time = omp_get_wtime();
    printf("Parallel begins\n");
    #pragma omp parallel
    {
        #pragma omp for
            for(int i = 0; i < k; i++) {
            printf("Name: %s\n",name);
        }
    }
     double parallel_end_time = omp_get_wtime();
    // also works
    // #pragma omp parallel for
    //         for(int i = 0; i < k; i++) {
    //         printf("Name: %s\n",name);
    //     }
   
    printf("Time taken for Serial computation is %f\n",serial_end_time - serial_start_time);
    printf("Time taken for Parallel computation is %f\n",parallel_end_time - parallel_start_time);
    printf("Parallel computing is faster by %fs than serial computing\n",(serial_end_time - serial_start_time)-(parallel_end_time - parallel_start_time));
}