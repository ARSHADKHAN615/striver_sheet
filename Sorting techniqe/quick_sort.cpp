class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int s, int e)
    {
        if(s>=e)
        return;
        
        int pivot = partition(arr,s,e);
        quickSort(arr,s,pivot-1);
        quickSort(arr,pivot+1,e);
    }
    
    public:
    int partition (int arr[], int s, int e)
    {
       int pivotInd = 0;
       for(int i=1;i<=e;i++){
           if(arr[s] >= arr[i]){
               pivotInd++;
           }
       }
       swap(arr[s],arr[pivotInd]);
       
       while(s<=pivotInd-1 && e>=pivotInd+1){
          if(arr[s] > arr[pivotInd] && arr[e] <= arr[pivotInd]){
              swap(arr[s],arr[e]);
              s++;
              e--;
          }else if(arr[s] > arr[pivotInd] && arr[e] > arr[pivotInd]){
              e--;
          }else{
              s++;
          }    
       }
       
       return pivotInd;
       
    }
};
