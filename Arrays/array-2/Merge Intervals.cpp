class Solution {
public:
    // step 1- take first interval and iterate ahead part
    // step 2 - compare ith interval to first interval
    // step 3 - if interval is not overlapping than push into (ans vector) 
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval = intervals[0];
        
        for(int i=1;i<intervals.size();i++){
            
            if(intervals[i][0] <= tempInterval[1]){
                tempInterval[1] = max(intervals[i][1],tempInterval[1]);
            }else{
                ans.push_back(tempInterval);
                tempInterval = intervals[i];
            }
        }
        
         ans.push_back(tempInterval);
        return ans;
    }
};