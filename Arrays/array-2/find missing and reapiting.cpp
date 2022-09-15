#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> ans;
    vector<int> substitute(n+1, 0); // initializing the substitute array with 0 of size n+1.

    // mark if element is present and increment the count of the element.
    for (int i = 0; i < n; i++)
    {
        substitute[arr[i]]++;
    }
    // if element is present more than once then it is the repeating element.
    // And if element is not present then it is the missing element.
    for (int i = 1; i <= n; i++)
    {
        if (substitute[i] == 0 ){
            ans.first = i;
        }
         if(substitute[i] > 1)
        {
            ans.second = i;
        }
    }

    
    return ans;
}
