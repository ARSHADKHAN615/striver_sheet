class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
        int n = r-l+1;
        int temp[n];
        int n2 = 0;
        int start1 = l,end1 = mid,start2 = mid+1,end2 = r;
        
        while(start1 <= end1 && start2 <= end2){
            if(arr[start1] < arr[start2]){
                temp[n2++] = arr[start1++];
            }else{
                temp[n2++] = arr[start2++];
            }
        }
        
        while(start1 <= end1){
            temp[n2++] = arr[start1++];
        }
        while(start2 <= end2){
            temp[n2++] = arr[start2++];
        }
        
        
        n2 = 0;
        for(int i=l;i<=r;i++){
            arr[i]=temp[n2++];
        }
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
          return;
          
          int mid = l+(r-l)/2;
          mergeSort(arr,l,mid);
          mergeSort(arr,mid+1,r);
          merge(arr,l,mid,r);
          
    }
};