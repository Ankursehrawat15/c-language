
#include <stdio.h>

int main() {
   int year;
   float salary;
   printf("Enter your salary and year of service\n");
   scanf("%f %d",&salary,&year);
   if(year>5){
       salary=salary+(5*salary/100);
       printf("Your salary with 5 percent bonus is %f\n",salary);

   }
else{
    printf("No bonus for you");

}
return 0;

}

