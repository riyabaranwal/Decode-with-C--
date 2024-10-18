#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "Raghav Garg is at pw";
    cout << str.size() << endl;
    cout << str.length() << endl;
    string s = "abcdef";
    cout << s << endl;
    //s.push_back('e');
    cout << s << endl;
   // s.pop_back();
    //s.pop_back();
    cout << s << endl;
    string st = "abq";
    cout << st << endl;
    st = st + "xy7"; // add
    cout << st << endl;
    cout << "s :" << s << endl;
    //reverse(s.begin(), s.end());
    cout << s << endl;
    reverse(s.begin() + 2, s.end() - 1);
    cout << s << endl;
    reverse(s.begin() + 2, s.begin() + 4);
    cout << s << endl;
}
