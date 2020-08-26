#include<stdio.h>
int main(){
    int Tclass,Aclass;
    float percent;
    printf("Enter Total classes held\n");
    scanf("%d",&Tclass);
    printf("Enter classes you have attended\n");
    scanf("%d",&Aclass);
    percent=Aclass*100/Tclass;
    if(percent<75){
        printf("attendance less then 75 percent\n");
        char c;
        printf("Do you have any medical cause ?\n"
        "Type Y for yes and N for no\n");
    scanf("%ch",&c);
    switch(c){
        case 'Y':
        printf("You are elegible to sit in exams");
        break;
        case 'N':
        printf("You are not elegible to sit in exams");
         break;
        default:
          printf("invlaid input\n");

    }
    }
    else{
        printf("attendance above 75 percent \n"
        "Elegible to sit in exams");
    }
    return 0;

}