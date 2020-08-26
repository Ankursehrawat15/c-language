#include <stdio.h>
int main()
{
  int cost,quantity;
  printf("Enter quantity you have purchased\n");
  scanf("%d",&quantity);
  cost=quantity*100;
  if(cost>1000){
      cost=cost-(10*cost/100);
      printf("Amount after Discount is %d\n",cost);
      

  }
  else{
      printf("Amount is %d\n",cost);

  }
  return 0;

}