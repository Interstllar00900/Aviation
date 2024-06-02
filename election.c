#include<stdio.h>
int count1=0;
int count2=0;
int count3=0;
void election(){
    
int a;
scanf("%d",&a);
if(a==1){count1++;}
if(a==2){count2++;}
if(a==3){count3++;}
}
int main(){
    int n;
    printf("how many person will vote\n");
    scanf("%d",&n);
    printf("1 for modi\n");
    printf("2 for rahul\n");
    printf("3 for arvind\n");
    for(int i=1;i<=n;i++){
        printf("%dth person will vote\n",i);
        election();
        
    }
    printf("election result\n");
    printf("modi %d\n",count1);
    printf("rahul %d\n",count2);
    printf("arvind %d\n",count3);
    return 0;
}