#include<iostream>
using namespace std;
int main(){
    int lastdigit;
   for(int i=1;i<=500;i++){
        int n=i;
        int sum=0;
        while(n!=0){
        lastdigit=n%10;
        lastdigit=lastdigit*lastdigit*lastdigit;
        sum=sum+lastdigit;
        n=n/10;
        }
        if(sum==i) {
            cout<<i<<endl;
        }

    }
  
    
    
    
}