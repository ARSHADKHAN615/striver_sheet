class Solution {
    //TC O(numRows2)
    //SC O(numRows2)
public:

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        
        for(int i=0;i<numRows;i++){
            // Resize the column for making triangle
            ans[i].resize(i+1);
            // And place 1 at first and last column index
            ans[i][0] = ans[i][i] = 1;
            
            // start 1 index and go to i-2
            // making ith row using previous row's element
            for(int j=1;j<i;j++){
                ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
};

// Recursively Approach for return PascalTriangle nth row
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        
        if(n==1){
           vector<ll> ans;
           ans.push_back(1ll);
           return ans;
        }
        
        vector<ll> small = nthRowOfPascalTriangle(n-1);
        
        vector<ll> Nth;
        Nth.push_back(1);
        
        for(int i=1;i<small.size();i++){
            Nth.push_back((small[i]+small[i-1])%1000000007);
        }
        Nth.push_back(1);
        return Nth;
    }
};