// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        // Complete the function
        int ans=n-1;
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[ans]){
            return false;
            }
            ans--;
        }
        return true;
    }
};




// { Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}  // } Driver Code Ends
