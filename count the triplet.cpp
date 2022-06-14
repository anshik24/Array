// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int c=0,i=n-1;
	    while(i>0){
	        int l=0, r=i-1;
	        while(l<r){
	            if(arr[l]+arr[r]==arr[i]){
	            c++;l++;r--;
	            }
	        else if(arr[l]+arr[r]<arr[i]){
	            l++;
	        }
	        else
	        r--;
}
i--;
	    }
	    return c;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends
