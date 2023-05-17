#include<stdio.h>
int main(){

    int num;

    printf("Enter Number to check even or odd = ");

    scanf("%d",&num);

    printf("The Number is:: %s",(num%2==0)? "EVEN" : "ODD");

return 0;
}

