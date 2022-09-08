class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = -1;
        for(int i=0;i<nums.size()-1;i++){
            if(i != nums[i]){
                ans = i;
                break;
            }
        }
        if(nums.size() != nums[nums.size()-1]){
            ans = nums.size();
        }
        return ans;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& a) {
    int x1 = a[0];
    int n = a.size();
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 1; i <= n; i++)
        x1 = x1 ^ i;
 
    return (x1);
    }
};