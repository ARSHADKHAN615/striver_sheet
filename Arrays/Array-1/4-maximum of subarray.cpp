//** Better Approach

int maxSubArray(vector < int > & nums, vector < int > & subarray) {
  int max_sum = INT_MIN;
  for (int i = 0; i < nums.size(); i++) {
    int curr_sum = 0;
    for (int j = i; j < nums.size(); j++) {
      curr_sum += nums[j];
      if (curr_sum > max_sum) {
        subarray.clear();
        max_sum = curr_sum;
        subarray.push_back(i);
        subarray.push_back(j);
      }
    }
  }
  return max_sum;
}


//** Kadane’s Algorithm 
/* The simple idea of Kadane’s algorithm is to look for all positive contiguous segments.
this is the best approach to solve this problem.
The maximum sum subarray problem consists in finding the maximum sum of a contiguous subsequence in an array or list of integers:*/

/* Time Complexity: O(n)
Space Complexity: O(1) */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        
        for(auto i:nums){
            sum += i;
            maxi = max(sum,maxi);
            if(sum < 0) sum = 0;
        }
        
        return maxi;
    }
};