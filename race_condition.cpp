#include<stdio.h>
#include<omp.h>
int main() {
    int sum = 0;
    omp_set_num_threads(20);
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        sum += id;
    }
    printf("The sum is %d\n",sum);
}

// we may get different outputs each time due to race condition (when two or more threads access shared resources or variables concurrently)
