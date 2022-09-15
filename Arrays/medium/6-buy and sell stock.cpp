//** Better Approach
class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans = 0;
        int minP= INT_MAX;
        
        for(int i=0;i<arr.size();i++){
            for(int j = i+1;j<arr.size();j++){
                if(arr[j] > arr[i]){
                    ans = max(arr[j]-arr[i],ans);
                }
            }            
        }
        return ans;
    }
};




//** Optimize Approach 1 
// This is the best approach to solve this problem.
// Time Complexity: O(n)
// Space Complexity: O(1)
/* in this approach we are using 2 pointers minP and ans to keep track of minimum price and maximum profit respectively.
    minP is used to keep track of minimum price
    ans is used to keep track of maximum profit
    */
class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans = 0;
        int minP= INT_MAX;
        
        for(int i=0;i<arr.size();i++){
            minP = min(arr[i],minP);
            ans = max(arr[i]-minP,ans);
        }
        return ans;
    }
};