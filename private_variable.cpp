#include<stdio.h>
#include<omp.h>

int main() {
int nthreads,tid;
#pragma omp parallel private(nthreads,tid)
{
    omp_set_num_threads(100);
    printf("The number of threads allocated are %d\n",omp_get_num_threads());
    tid = omp_get_thread_num();
    printf("Thread id = %d\n",tid);
}
return 0;
}
