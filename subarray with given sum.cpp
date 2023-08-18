// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int currsum=0,it=0,i;
        for(i=0;i<n;i++){
          currsum+=arr[i];
          while(currsum>s){
          currsum-=arr[it];
          it++;
           } 
            if(currsum==s){
            return {it+1,i+1};
            }
        
        }
        return {-1};
        
    }
};
 vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
      
      if(s==0)
      return {-1};
      long long sum=0,l=0,r=0;
      while(r<n){
          if(sum+arr[r]<=s){
              sum+=arr[r++];
          }
          else{
          sum-=arr[l++];
      }
      if(sum==s){
          return{l+1,r};
      }
    }
    return {-1};
      
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
