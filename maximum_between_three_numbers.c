#include<stdio.h>
int main(){

    int num1,num2,num3,max;

    printf("Enter First Number= ");

    scanf("%d",&num1);

    printf("Enter Second Number= ");

    scanf("%d",&num2);

    printf("Enter Third Number= ");

    scanf("%d",&num3);

    max=(num1>num2 && num1>num3)?num1:
        (num2>num3)?num2:num3;

    printf("max value %d , %d , %d is %d",num1,num2, num3,max);

return 0;
}
