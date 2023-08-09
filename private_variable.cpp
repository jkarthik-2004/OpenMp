#include<stdio.h>
#include<omp.h>

int main() {
int nthreads,tid;
#pragma omp parallel private(nthreads,tid)
{
    int id;
    omp_set_num_threads(100);
    printf("The number of threads allocated are %d\n",omp_get_num_threads());
    tid = omp_get_thread_num();
    printf("Thread id = %d\n",tid);
}
return 0;
}

// Here we are setting threads inside the parallel region
// Placing the omp_set_num_threads call inside the parallel region could potentially 
// lead to confusion and unexpected results in more complex programs.
// also variable " id " used only inside the parallel region (private variable) due to block scope.
