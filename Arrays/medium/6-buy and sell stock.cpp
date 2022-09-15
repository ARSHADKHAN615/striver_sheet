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




//** Optimize Approach
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