#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
   srand(time(0));
   int n=3;
   int player;
   printf("you have total 5 chances\n");
   printf("0 for rock\n");
   printf("1 for paper\n");
   printf("2 for scissor\n");
   int x=0;
   int y=0;
   int computer;
   for(int i=0;i<5;i++){
    printf("enter input\n");
    scanf("%d",&player);
    computer = rand()%n;
    
    
  if(computer == player){printf("tie\n");}
  
  
  if(computer==1){
    if(computer<player){printf("player point \n");
    printf("computer:paper\n");
    x++;}
    else{printf("computer point\n");
    printf("computer:paper\n");
    y++;}
  }
  if(computer==2){
    if(player==1){printf("computer point\n");
    printf("computer:scissor\n");
    y++;}
    if(player==0){printf("player point \n");
    printf("computer:scissor\n");
    x++;}
  }
  if(computer==0){
     if(player==1){printf("player point \n");
     printf("computer:rock\n");
     x++;}
     if(player==2){printf("computer point \n");
     printf("computer:rock");
     y++;}
  }
   }
   if(x>y){printf("player wins\n");}
   else{
    printf("computer wins\n");
   }
    
}