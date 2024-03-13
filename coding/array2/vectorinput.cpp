// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5);
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//      for(int i=0;i<5;i++){
//       cout<<v[i];
//     }
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"x : ";
        cin>>x;
       v.push_back(x);
    }
     for(int i=0;i<n;i++){
      cout<<v[i];
    }
}