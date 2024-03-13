// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(9);
//     cout<<v.size()<<endl;
//     v.push_back(2);
//     cout<<v.size()<<endl;
//     v.push_back(4);
//     cout<<v.size()<<endl;
//     v.push_back(5);
//     cout<<v.size()<<endl;
//     v[1]=45;
//     cout<<v[0]<<" ";
//     cout<<v[1]<<" ";
//     cout<<v[2]<<" ";
//     cout<<v[3]<<" ";
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v[1]=45;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}