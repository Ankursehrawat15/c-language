#include<stdio.h>
int main()
{
int num,num1,num2;
printf("enter value for num:\n");
scanf("%d",&num);
printf("enter the value for num1:\n");
scanf("%d",&num1);
num2=num;
num=num1;
num1=num2;
printf("Swapping your values\n");
printf("value of num is : %d\nvalue of num1 is %d\n", num, num1);
return 0;





}