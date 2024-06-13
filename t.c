#include<stdio.h>
int main(){
    int a,b;
    printf("enter first value\n");
    scanf("%d",&a);
    printf("enter second value\n");
    scanf("%d",&b);
    int x;
    printf("1 for +\n");
    printf("2 for *\n");
    scanf("%d",&x);
    if(x==1){printf("%d\n",a+b);}
    if(x==2){printf("%d\n",a*b);}
    return 0;
}