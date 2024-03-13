#include<iostream>
using namespace std;
int main(){
    int n,lastdigit,sum=0;
    cout<<"Enter n : ";
    cin>>n;
    int number=n;
   for(int i=1;i<=500;i++){
        
        lastdigit=n%10;
        lastdigit=lastdigit*lastdigit*lastdigit;
        sum=sum+lastdigit;
        n=n/10;

    }
    if(sum==number){
        cout<<"armstrong";
    }
    else{
        cout<<"no armstrong";
    }
}