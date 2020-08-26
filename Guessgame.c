#include<Stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess,number,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    do {
        printf("Guess the number between 1to100\n");
        scanf("%D",&guess);
     if(guess>number){
         printf("Lower number please!\n");
     }   
     else if(guess<number){
         printf("Higher number please!\n");
     }
     else{
         printf("You guessed in %d attempts\n",nguesses);
     }
     nguesses++;
     } while(guess!=number);
     return 0;
    


}