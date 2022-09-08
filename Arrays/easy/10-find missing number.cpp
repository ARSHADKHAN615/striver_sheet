// https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number

int missingNumber(int a[], int n)
{
   int temp[n+1]={0};
   for(int i=0;i<n-1;i++){
       temp[a[i]] = 1;
   }
   for(int i=1;i<n+1;i++){
      if(temp[i] == 0){
          return i;
      }
   }
   return -1;
}

int missingNumber(int a[], int n)
{
    int x1 = a[0];

 
    for (int i = 1; i < n-1; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 1; i <= n; i++)
        x1 = x1 ^ i;
 
    return (x1);
}