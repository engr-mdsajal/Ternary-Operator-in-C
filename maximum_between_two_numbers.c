#include<stdio.h>
int main(){

    int num1,num2,max;

    printf("Enter First Number= ");

    scanf("%d",&num1);

    printf("Enter Second Number= ");

    scanf("%d",&num2);

    max=(num1>num2)?num1:num2;

    printf("max value %d and %d is %d",num1,num2,max);

return 0;
}
