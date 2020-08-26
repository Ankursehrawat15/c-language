#include<stdio.h>
void display();
int main(){
    printf("Initializing function\n");
    display();
    printf("Initialized\n");
    return 0;
}
void display(){
    printf("I am display function\n");
}