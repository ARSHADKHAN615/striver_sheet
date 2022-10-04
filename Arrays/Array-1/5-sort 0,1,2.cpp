// sort 0,1,2 problem is a variation of this problem
// if 0 is found then nextOne is incremented and 0 is swapped with nextOne
// if 2 is found then nextTwo is decremented and 2 is swapped with nextTwo
// if 1 is found then nothing is done
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int nextOne = 0,nextTwo = nums.size()-1;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                swap(nums[nextOne],nums[i]);
                nextOne++;
            }
        }
        
        for(int i=n-1;(i>=0 && nums[i] != 0);i--){
            if(nums[i] == 2){
                swap(nums[nextTwo],nums[i]);
                nextTwo--;
            }
        }
        
    }
};

//** Optimize Approach **//
// Time Complexity: O(n)
// Space Complexity: O(1)
// In this approach we are using 3 pointers low, mid and high to keep track of 0,1 and 2 respectively 
// low is used to keep track of 0
// hi is used to keep track of 2
// mid is used to traverse the array
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int hi = nums.size()-1;
        int mid = 0;
        int low = 0;
        
        while(mid<=hi){
            
              switch(nums[mid]){
                  case 0:
                     swap(nums[low++],nums[mid++]);
                     break;
                  case 1:
                    mid++;
                    break;
                  case 2:
                    swap(nums[mid],nums[hi--]);
                    break;
              }
                
        }
          
    }
};

