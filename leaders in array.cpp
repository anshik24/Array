// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        /*
        for(int i=0;i<n;i++){
            int j;
            for(j=i+1;j<n;j++){
                if(a[i]<=a[j])
                break;
            }
            if(j==n)
        ;
        }*/
        
       /* 
        int mfr=a[n-1];
        for(int i=n-2;i>=0;i--){
            if(a[i]>mfr){
                return a[i];
                mfr=a[i];
            }
        }*/
        vector<int>m;
        int curr=a[n-1];
        m.push_back(curr);
        for(int i=n-2;i>=0;i--){
            
            if(a[i]>=curr){
                curr=a[i];
                m.push_back(a[i]);
            }
            
        }
        // for(int i=0;i<m.size();i++){
        //     cout<<m[i];
        //}
      reverse(m.begin(),m.end());
        return m;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
