//find this question on lintcode as meeting room 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int meetingRooms(vector<vector<int> >&intervals){
vector<int>start,end;
for(auto ele :intervals){
    start.push_back(ele[0]);
    end.push_back(ele[1]);
}
sort(start.begin(),start.end());
sort(end.begin(),end.end());
int ans = 0 ;
int rooms = 0 ;
int i = 0 , j = 0;
while(i<start.size() && j < end.size()){
    if(start[i] < end[j]){
        rooms++;
        ans = max(ans,rooms);
        i++;
    }
    else if(start[i] > end[j]){
        rooms--;
        j++;
    }
    else{
        i++;
        j++;
    }
}
return ans;
}