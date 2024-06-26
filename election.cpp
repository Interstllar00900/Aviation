#include<stdio.h>
int main(){
   int x,y,z;
   x=0;
   y=0;
   
   int vote;
   int number;
   printf("enter how many people will vote\n");
   scanf("%d",&number);
   printf("enter 1 to vote trump\n");
   printf("enter 2 to vote biden\n");
   for(int i=1;i<=number;i++){
   printf("%d person will vote\n",i);
   scanf("%d",&vote);
   if(vote==1){
    x++;
   }
   if(vote==2){
    y++;
   }
   }
   printf("election results are:\n");
   printf("Trump votes: %d\n",x);
   printf("Biden votes: %d\n",y);
   if(x>y){printf("Trump Wins!\n");}
   else{printf("Biden Wins!\n");}
    return 0;
}