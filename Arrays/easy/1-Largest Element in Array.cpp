//** Recursive Approach
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
       if(arr.size() == 0)
       return 0;
       int ans = arr[arr.size()-1];
       arr.pop_back();
       int small = largest(arr,n);
       return max(small,ans);
    }
};

//** Iterative Approach
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
       int ans = INT_MIN;
      for(int i=0;i<n;i++){
          ans = max(ans,arr[i]);
      }  
      return ans;
    }
};