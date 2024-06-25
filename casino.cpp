#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int main(){
    srand(time(0));
    float x;
    printf("enter the amount\n");
    scanf("%f",&x);
    int n=10;
    int computer;
    int guess;
    int p=0;
    int l=0;
    printf("guess a number\n");
    for(int i=0;i<10;i++){
        printf("%d chance\n",i+1);
        scanf("%d",&guess);
        computer= rand()%n;
        if(computer==guess){
            printf("right answer\n");
            p++;}
        else{
             printf("wrong answer\n");
            l++;
        }
        
    }
    float y1,y2;
    y1= x*2*p;
    y2=x*l*(0.5);
   
    if(y1>y2){
        printf("you earned profit of %f\n",y1-y2);
    }
    else{
        printf("you earned a loss of %f\n",y1-y2);
    
    }


    return 0;
}