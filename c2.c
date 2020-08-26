#include <stdio.h>
int main( )
{
int f,i,factorial=1;
printf("Enter your number\n");
scanf("%d",&f);
for(i=1;i<=f;i++){
    factorial*=i;
    
}
printf("%d",factorial);
return 0;
}
