#include<iostream>
using namespace std;
int main(){
    int n,lastdigit;
    cout<<"Enter n : ";
    cin>>n;
    int givennumber=n;
    int reverse=0;
    while(n!=0){
        lastdigit=n%10;
        reverse=(reverse*10)+lastdigit;
        n=n/10;
    }
    cout<<"givennumber+reverse : "<<" "<<givennumber+reverse;
}