//** Better Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int nextOne = 0,nextTwo = nums.size()-1;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                swap(nums[nextOne],nums[i]);
                nextOne++;
            }
        }
        
        for(int i=n-1;(i>=0 && nums[i] != 0);i--){
            if(nums[i] == 2){
                swap(nums[nextTwo],nums[i]);
                nextTwo--;
            }
        }
        
    }
};

//** Optimize Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int hi = nums.size()-1;
        int mid = 0;
        int low = 0;
        
        while(mid<=hi){
            
              switch(nums[mid]){
                  case 0:
                     swap(nums[low++],nums[mid++]);
                     break;
                  case 1:
                    mid++;
                    break;
                  case 2:
                    swap(nums[mid],nums[hi--]);
                    break;
              }
                
        }
          
    }
};

