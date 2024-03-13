//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of terms : ";
    cin>>n;
    int a;
    a=4;
    for(int i=1 ; i<=n ; i++){
        cout<<a<<endl;
        a=a+3;
    }
    }
