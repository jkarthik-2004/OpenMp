#include<stdio.h>
#include<omp.h>
using namespace std;
int arr(int A[][15], int id) {
    printf("id row is %d : ", id);
    for(int i = 0; i < 6; i++) {
        printf("%d ",A[id][i]);
    }
    printf("\n");
}

 int main() {
    int a[15][15];
    omp_set_num_threads(6);
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            a[i][j] = i + j;
        }
    }
    #pragma omp parallel 
    {
        int id = omp_get_thread_num();
        arr(a,id);
    }
}