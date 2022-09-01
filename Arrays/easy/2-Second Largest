//** Recursive Approach
class Solution{
public:	
	// Function returns the second
	// largest elements
	int solve(int* arr,int n,int& first,int& second){
	    if(n==0)
	      return second;
	      
	   
	   if(arr[0] > first){
	           second = first;
	           first = arr[0];
       }else if(arr[0] > second && arr[0] != first){
           second = arr[0];
       }
       
       return solve(arr+1,n-1,first,second);
       
	}
	int print2largest(int arr[], int n) {
        int second = INT_MIN;
        int first = -1;
	   return solve(arr,n,first,second);
	}
};

//** Iterative Approach
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   int second = INT_MIN;
	   int first = -1;
	   for(int i=0;i<n;i++){
	       if(arr[i] > first){
	           second = first;
	           first = arr[i];
	       }else if(arr[i] > second && arr[i] != first){
	           second = arr[i];
	       }
	   }
	   return second;
	}
};