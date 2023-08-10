//   Write an openMP program to print number of threads. 

#include<stdio.h>
#include<omp.h>
int main() {
    int nthreads,tid;
    #pragma omp parallel private(nthreads,tid)
    {
        nthreads = omp_get_num_threads();     
        printf("Number of threads are %d\n",nthreads);
    }
}