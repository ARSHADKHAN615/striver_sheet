//** Recursive Approach
void solve(vector<int>& arr,int n,int s){

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

    solve(arr,n,s+1);
}

void insertionSort(int n, vector<int> &arr){

    solve(arr,n,1);

    //** Iterative Approach
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 && current < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}