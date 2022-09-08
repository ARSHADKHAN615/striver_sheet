//** Find the row with maximum number of 1’s

class Solution{
public:
    int bin (vector<int> arr,int s,int e){
        int mid = (s+e)/2;
       while(s<=e) {
           if(arr[mid] == 1){
               e = mid-1;
           }else if(arr[mid] < 1){
               s = mid+1;
           }else{
               e = mid-1;
           }
           mid = (s+e)/2;
       }
       return e;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int row = arr.size();
	    int col = arr[0].size();
	    int i = 0;
	    int j = col-1;
	    int ans = -1;
	    int temp = 0;
	    
	    for(int s = 0;s<row;s++){
	        int firstInd = bin(arr[s],i,j);
	        int getLen = j - firstInd;
	        
	        if(getLen > temp){
	            ans = s;
	            temp = getLen;
	        }
	    }
	    return ans;
	}

};