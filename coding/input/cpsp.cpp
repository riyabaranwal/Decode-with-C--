#include<iostream>
using namespace std;
int main(){
    int cp,sp,profit,loss;
    cout<<"Enter cp:";
    cin>>cp;
    cout<<"Enter sp:";
    cin>>sp;
    if(sp>cp){
        cout<<"profit"<<endl;
        profit = sp - cp;
        cout<<"profit="<<profit;
    }
    else if(cp>sp){
        cout<<"loss"<<endl;
        loss = cp - sp;
        cout<<"loss="<<loss;
    }
    else{
        cout<<"no profit no loss";
    }
}
