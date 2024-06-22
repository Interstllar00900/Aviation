#include<iostream>
using namespace std;
int main(){
    int n;
    printf("how many product purchased\n");
    scanf("%d",&n);
    int price[n];
   string products[n];
   
   for(int i=0;i<n;i++){
    printf("enter product name\n");
    scanf("%s",&products[i]);
    printf("enter product price\n");
    scanf("%d",&price[i]);
   }
   printf("bill\n");
   for(int i=0;i<n;i++){
    printf("%d.price of product %s is %d\n",i+1,products[i],price[i]);
   }
   int amount =0;
   for(int i=0;i<n;i++){
    amount = amount + price[i];
   }
   printf("total amount to be paid is Rs.%d\n",amount);

    return 0;
}