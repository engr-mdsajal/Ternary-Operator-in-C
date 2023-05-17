#include<stdio.h>
int main(){

    int year;

    printf("Enter Year to check Leap Year or Not = ");

    scanf("%d",&year);

    printf("The Year is:: %s",(year%4==0 && year%100!=0)? "Leap Year" :
           (year%400==0)? printf("leap year") : printf("not leap year"));

return 0;
}

