#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
float min(float a, float b){
    if(a<b){
        return a;
    }
    else{
        return b;
        }
}

float max(float a, float b){
    if(a>=b){
        return a;
    }
    else{
        return b;
        }
}

int main()
{
    int n;
    int arr[100];
    cout << "Enter no. of elements : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << " ";
    }
    cout << endl;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    float kmin = (float)INT_MIN;
    float kmax = (float)INT_MAX;
    for (int i = 0; i < n - 1; i++)
    { // kmin
        if (arr[i] >= arr[i + 1])
        {
            kmin = min(kmax, (arr[i] + arr[i + 1]) / 2.0);
        }
        else{//kmax
             kmax = max(kmax, (arr[i] + arr[i + 1]) / 2.0);
             }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag== false){
        cout<<-1;
    }
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout<<"There is only one value of K :"<<kmin;
        }
        else{
            cout<<-1;
        }
    }
    else{
        if(kmin-(int)kmin>0){
            kmin=(int)kmin+1;
        }
        cout<<"range of K is : ["<<kmin<<" , "<<(int)kmax<<"]";
    }


   


}