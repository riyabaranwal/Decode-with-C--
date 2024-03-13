//Print the table of ‘n’. Here ‘n’ is an integer which the user will input
#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter an integer : ";
    cin>>n;
    for(int i=1 ; i<=10; i++){
      a=n*i;
        cout<<a<<endl;
    }
}