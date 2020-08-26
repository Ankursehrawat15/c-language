#include<stdio.h>
int main()
{
    int upercase, lowercase;
char c;
scanf("%c",&c);
lowercase=(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
upercase=(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); 

if(lowercase || upercase)
{
    printf("%c is vowel",c);
}
else{
    printf("%c is constant",c);

}
return 0;
}