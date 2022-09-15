// Map Approach
// TC O(n)
// SC O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        map<int,int> M;
        
        for(int i=0;i<nums.size();i++){
            M[nums[i]]++;
            
            if(M[nums[i]] >1){
                return nums[i];
            }
        }
        return -1;
    
    }
};


// slow and fast pointer approach
// TC O(n)
// SC O(1)
int findDuplicate(vector<int> &nums, int n){
    int slow = nums[0];
    int fast = nums[0];
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);
        
        
    fast = nums[0];

    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}