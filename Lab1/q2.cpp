//  Write an openMP program to print “Name and Register Number” with parallel computation.  

#include<omp.h>
#include<stdio.h>
int main() {

#pragma omp parallel
    {
            char name [] = "Karthik";
            char regNO [] = "2021BCS0048";
            printf("Name: %s\nRegNo: %s\n",name,regNO);
        
    }
}