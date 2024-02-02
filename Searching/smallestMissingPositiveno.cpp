//given a sorted array of non-negative distinct integers , find the smallest missing non-negative elements in it.
#include<iostream>
using namespace std;
int main() {
    int arr[]={0,1,2,3,4,5,8,9,12};
    int n=9;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(mid==arr[mid]){
            lo = mid+1;
        }
        else if(mid != arr[mid]){
            cout<<mid;
            break;
        }
    }
}