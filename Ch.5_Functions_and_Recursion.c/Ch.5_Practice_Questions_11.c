// Q --> Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit .

#include<stdio.h>
int calPercentage(int science, int math, int sanskrit);

int main(){
    int science = 90;
    int math = 98;
    int sanskrit = 95;

    printf("percentage is : %d" , calPercentage(science, math, sanskrit));
    return 0;
}

int calPercentage(int science, int math, int sanskrit){
    return((science + math + sanskrit) / 3 );
    
}