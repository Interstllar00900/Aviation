#include<iostream>
using namespace std;
class person{
    public:
    string name;
    string id;
    void input(){
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter id"<<endl;
        cin>>id;
        
    }
    void display(){
        cout<<"details"<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
   
};
 int sel(){
        int x;
        cout<<"press 1 for registration"<<endl;
        cout<<"press 2 for display"<<endl;
        cout<<"press 0 for exit"<<endl;
        cin>>x;
        return x;
    }
    int reg(person per[],int n,int j){
          for(int i=j;i<n;i++){
            per[i].input();
            j++;
            if(per[i].name=="b" && per[i].id =="b"){
                j--;
                break;
            }
          }
          
          return j;
    }
    void dis(person per[],int j){
         for(int i=0;i<j;i++){
            per[i].display();
         }
    }
int main(){
int n;
cout<<"how many are you"<<endl;
cin>>n;
person per[n];
int x;
static int j=0;
while(true){
    x= sel();
    if(x==1){
       j=reg(per,n,j);
    }
    if(x==2){
       dis(per,j);
    }
    if(x==0){
        exit(0);
    }

}
    return 0;
}