//find this question on leetcode as meeting room 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool meetingRooms(vector<vector<int> >&intervals){
    if(intervals.size() == 0) return true; //intervals mtlb meeting 
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
return ans == 1;
}