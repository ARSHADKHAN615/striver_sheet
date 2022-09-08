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