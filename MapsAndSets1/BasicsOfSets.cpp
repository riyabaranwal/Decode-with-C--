#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    //unordered sets have all the elements in random order
    //sets only have unique elements
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(2);
    s.erase(4);
    int target = 10;
    //s.find searches for the target and if not found then returns the last element
    if(s.find(target)!=s.end()){
        cout<<"exists"<<endl;
    }
    else{
        cout<<"do not exists"<<endl;
    }
    cout<<s.size()<<endl;
    for (int ele : s)
    {
        cout << ele << " ";
    }
}