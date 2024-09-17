#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int minProduct(vector<int>&arr){
    int cn = 0 , cz = 0 , cp = 0;//count of neg, zero and positive
    int product_pos = 1 , product_neg = 1;
    int largestNegative = INT_MIN;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i]<0){
            cn++;
            product_neg *= arr[i];
            largestNegative = max(arr[i],largestNegative);
        }
        if(arr[i]>0){
            cp++;
            product_pos *= arr[i];
        }
        if(arr[i] == 0) cz++;
    }
    if(cn == 0){
        if(cz>0) return 0;
        else{
            auto x = min_element(arr.begin(),arr.end()); // agar 0 exist nhi karta toh minimum postive lement nikalne ka c++ function hai yeh
            return*x;
        } 
    }
    else{
        if(cn % 2 == 0){
            //even neg no.
            return (product_neg/largestNegative)*product_pos;
        }
        else{
             //odd neg no.
             return product_neg*product_pos; 
        }
    }

}
int main(){
    vector<int> arr{-2,-3,1,4,-2};
    cout<<minProduct(arr)<<endl;
    return 0;
}
