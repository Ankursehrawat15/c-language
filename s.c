#include<stdio.h>  
void main ()  
{  
    int j = 1;  
    while(j+=2,j<=10)  
    {  
        printf("%d ",j);
        j++;   
    }  
    printf("%d",j);  
}  