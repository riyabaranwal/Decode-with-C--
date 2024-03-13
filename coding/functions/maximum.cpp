#include<iostream>
using namespace std;
int maximum(int a, int b){
    int n;
     if(a>b){
        n=a;
        
    }
    else{
       n=b;
    }
    return n;
}
int main(){
    int a,b;
    cin>>a>>b;
   cout<<"maximum : "<< maximum(a,b);

   
}