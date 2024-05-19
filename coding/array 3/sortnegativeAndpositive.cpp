#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort(vector<int>&v1){
    int n = v1.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v1[i]<0) i++;
        if(v1[j]>=0) j--;
        if(v1[i]>=0 && v1[j]<0){
             swap(v1[i], v1[j]);
            i++;
            j--;
            // v1[i]<0;
            // v1[j]>=0;
            // i++;
            // j--;
        } 
    }
    //  if(i < j) {
    //         // Swap the elements at i and j
    //         swap(v1[i], v1[j]);
    //         i++;
    //         j--;
    //     }
}
int main(){
    vector<int>v;
    v.push_back(-2);
    v.push_back(4);
    v.push_back(-1);
    v.push_back(1);
    v.push_back(-3);
    v.push_back(-1);
    v.push_back(9);
for(int i = 0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort(v);
cout<<endl;
for(int i = 0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
}
}