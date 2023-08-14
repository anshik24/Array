//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int ans=0,cnt=0,cnt1=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                cnt++;
                ans=max(ans,cnt);
            }
            if(a[i]==1){
            cnt1++;
            cnt--;
            if(cnt<=0)
            cnt=0;
        }
        }
        return ans+cnt1;
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends
