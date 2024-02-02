#include<iostream>
using namespace std;
int sum(int s,int n,int i){
    if(i>n) {
        return s;
    }
    return sum(s+i,n,i+1);
}
void sum2(int n){
    if(n==0) return;
    else{