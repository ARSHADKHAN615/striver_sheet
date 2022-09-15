// Frequency Approach
// TC O(n)
// SC O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
           vector<int> substitute(n+1, 0); // initializing the substitute array with 0 of size n+1.

        // mark if element is present and increment the count of the element.

        for (int i = 0; i < n; i++)
        {
            substitute[nums[i]]++;
        }
        // if element is present more than once then it is the duplicate element.
        for (int i = 1; i <= n; i++)
        {
             if(substitute[i] > 1)
            {
                return i;
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