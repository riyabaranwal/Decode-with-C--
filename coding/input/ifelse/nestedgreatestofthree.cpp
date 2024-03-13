#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter first no. : ";
    cin>>n1;
    cout<<"Enter second no. : ";
     cin>>n2;
    cout<<"Enter thoird no. : ";
     cin>>n3;
     if(n1>n2){
        if(n1>n3){
            cout<<"n1 is the greatest";
        }
        else{//n3>n1 i.e n1>n2 therefore,n3>n1>n2
            cout<<"n3 is the greatest";
        }
     }
     else if(n2>n1){
        if(n2>n3){
             cout<<"n2 is the greatest";
        }
        else{//n3>n2 i.e n2>n1 therefore,n3>n2>n1
            cout<<"n3 is the greatest";
        }
     }
}    
