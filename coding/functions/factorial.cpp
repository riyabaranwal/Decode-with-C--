#include<iostream>
using namespace std;
int fact(int n){
 int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<fact;
        cout<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    fact(n);
}