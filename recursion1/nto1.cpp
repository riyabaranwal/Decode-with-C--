//print n to 1
#include<iostream>
using namespace std;
int print(int n){
    if(n == 0) {
        return 0;
    }
    else{
        cout << n << " ";
         print(n-1);
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    print(n);
}