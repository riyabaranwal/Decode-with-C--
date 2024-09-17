#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
    //pair<int,int> , first -> value , second -> deadline
   
    return p1>p2;
}
double jobScheduling(vector<int>&profit , vector<int>&deadline , int n){
    // TC = O(nlogn) , SC = Sorting algo pe depend karega
    vector<pair<int , int> >arr;
    for(int i = 0 ; i < n ; i++){
        arr.push_back({profit[i],deadline[i]});
    }
    sort(arr.begin(),arr.end(),cmp);
    int maxi = 0;
     for (int i = 1; i < n; i++) {
         maxi = max(maxi, arr[i].second);
      }
      vector<int>slot(maxi+1,-1);
    int countJobs = 0 , jobProfit =0;
    
      for (int i = 0; i < n; i++) {
         for (int j = arr[i].second; j > 0; j--) {
            if (slot[j] == -1) {
               slot[j] = i;
               countJobs++;
               jobProfit += arr[i].first;
               break;
            }
         }
      }
       cout << "Number of Jobs: " << countJobs << endl;
      return jobProfit;
 
   
}
int main(){
 vector<int>profit = {60,100,120,600};
    vector<int>deadline = {1,2,2,2};
   // int W = 50;
    int n = 4;
    cout<<jobScheduling(profit,deadline,n)<<endl;
}