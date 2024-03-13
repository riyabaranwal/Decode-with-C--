#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=500;i++){
    int n=i,a;
    int sum=0;
    while(n!=0){
        a=n%10;
        sum=sum+(a*a*a);
        n=n/10;
    }
    if(i==sum){
    cout<<i<<endl;
    }
}
    
}