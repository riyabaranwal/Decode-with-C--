class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int max = INT_MIN;
        int idx = -1;
         int t = 0;
        for(int i = 0 ; i < n ; i++){
            if(max < height[i]){ max = height[i];
            idx = i;
            }
           
         }
         int k = 0;
         while(k<=idx){
        int max1 = INT_MIN;
       
        for(int i = idx - 1 ; i >= 0 ; i--){
            if(height[i] == 0){
                for(int j = 0 ; j < height[i] ; j++){
                      if(max1 < height[i]) max1 = height[i];
                      return max1;
                }
             t = min(max,max1);
            }
            t = t + min(height[i],height[i+1]);
            
        }
        k++;
             return t;
         }
    
         while(k>idx){
            for(int i = idx + 2 ; i < n ; i++ ){
                if(height[i] < height[i+1] && height[i] < height[i-1]){
                    t = t+min(height[i+1],height[i-1]);
                }
               // return t;
            }
           
         }
          
    }
  

};