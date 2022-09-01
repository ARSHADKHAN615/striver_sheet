//** Recursive Approach
void solve(vector<int>& arr,int n,int s,int e){

    if(s >= e)
        return;
    
    int store = arr[s];
    int j = s-1;
    for(;j>=0;j--){
       if(store < arr[j]){
           arr[j+1] = arr[j];
       }else{
           break;
       }
    }
    arr[j+1] = store;
    
    solve(arr,n,s+1,e);
}

void bubbleSort(vector<int>& arr, int n)
{   
    solve(arr,n,1,n);
}


//** Iterative Approach
void bubbleSort(vector<int>& input, int n)
{   
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-1-i);j++){
            if(input[j]>input[j+1]){
                int temp=input[j+1];
                input[j+1]=input[j];
                input[j]=temp;
            }
        }
    }
}