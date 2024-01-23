#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class{
public:
int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size();i++){
          int count = 0;
         for(int j=i+1;j<nums.size();j++){
             if(nums[i]==nums[j]){
                 count++;
             }
              if(count>=(nums.size()/2)){
         return nums[i];    
         }   
     }
    }
    return -1;
}
};
//is case mein 44 by 49 test case passed dikha rha h mtlb thoda galat h
