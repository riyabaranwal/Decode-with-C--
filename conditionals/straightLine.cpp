//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
#include<iostream>
using namespace std;
int main(){
    float x1 , y1 , x2 , y2 , x3 , y3 , m , n;
    cout<<"x1 : ";
    cin>>x1;
    cout<<"x2 : ";
    cin>>x2;
    cout<<"x3 : ";
    cin>>x3;
    cout<<"y1 : ";
    cin>>y1;
    cout<<"y2 : ";
    cin>>y2;
    cout<<"y3 : ";
    cin>>y3;
    m = ((y2 - y1)/(x2 - x1));
    n = ((y3 - y2)/(x3 - x2));
    if(m == n){
        cout<<"all the three points fall on one straight line.";
    }
    else{
        cout<<"all the three points do not fall on one straight line.";
    }

}