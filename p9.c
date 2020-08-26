#include<stdio.h>
int main()
{
    int n,n1,n2;
    printf("Enter no.\n");
    scanf("%d %d %d",&n, &n1, &n2);
    if(n>=n1 && n>=n2)
    {
        printf("%d is greatest of all",n);
    }
    else if(n1>=n && n1>=n2)
    {
        printf("%d is greatest of all",n1);

    }
    else if (n2>=n && n2>=n1)
    {
        printf("%d is greatest of all",n2);

    }
return 0;    
}
