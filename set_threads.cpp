#include<stdio.h>
#include<omp.h>

int main() {
int nthreads,tid;
omp_set_num_threads(4);
printf("The number of threads allocated are %d\n",omp_get_num_threads());
#pragma omp parallel private(nthreads,tid)
{
    tid = omp_get_thread_num();
    printf("Thread id = %d\n",tid);
}
return 0;
}

// Here we are setting number of threads outside the parallel region it is considered to be the best practice
// to ensure consistent behavior across different OpenMP implementations and scenarios.
