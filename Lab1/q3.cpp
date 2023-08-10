//  Write an openMP program to print "Name and Register Number "with parallel computation along with the corresponding thread id. 

#include<omp.h>
#include<stdio.h>
int main() {

#pragma omp parallel
    {
            char name [] = "Karthik";
            char regNO [] = "2021BCS0048";
            printf("From thread id: %d\n",omp_get_thread_num());
            printf("Name: %s\nRegNo: %s\n",name,regNO);
        
    }
}