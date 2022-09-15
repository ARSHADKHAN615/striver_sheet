class Solution {
    // TC 0(n+m)
    // SC o(1)
    // leetcode problem
public:
    //  this two pointer approach
    // step 1 - make two pointer i and j at array's last position
    // step 2 - compare both elements and place kth position
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1,j=n-1;
        int k = (m+n)-1;

        while(i>=0 && j>=0){
            // compare both array's last element and place it Kth position
            if(nums1[i] >= nums2[j]){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }
        // if jth array have any element
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};



class Solution{
    // TC 0(n*m)
    // SC o(1)
    // gfg problem
    public:
        //Function to merge the arrays.
        // this algo work only if both arrays are sorted

        // step 1 compare and swap them
        // step 2 make second array sorted for our algo 
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            for(int i=0;i<n;i++){
                // compare and swap them arr1 ith and arr2 0th position
                int take_jth_ele = arr2[0];
                if(take_jth_ele <= arr1[i]){
                    swap(arr1[i],arr2[0]);
                }
                
                
                // insert the element its right position 
                int take_for_place = arr2[0];
                int j=1;
                for(;j<m;j++){
                    if(take_for_place > arr2[j]){
                        arr2[j-1] = arr2[j];
                    }else{
                        break;
                    }
                }
                arr2[j-1] = take_for_place;
                
            }
        } 
};