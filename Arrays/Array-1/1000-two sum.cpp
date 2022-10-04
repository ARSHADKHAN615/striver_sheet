class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> M;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(M.find(target - nums[i]) != M.end()){
                ans.emplace_back(M[target - nums[i]]);
                ans.emplace_back(i);
            }
            M[nums[i]] = i;
        }
        return ans;
    }
};