// Count inversion in an array
// meaning how many times a[i] is greater than a[j] and i is before j in terms of index
// brute force approach TC O(n^2) SC O(1)
int countInversion(vector<int> &arr, int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }
    return count;
}
// And optimized approach using merge sort
// TC O(nlogn) SC O(n)

