// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        // code here
       /* float x= sqrt(N);
        int y=x;
        if(x==y)
        return y-1;
        else
        return y;
        */
       //return ceil(sqrt(N)-1);
    int i;
        for(i=1;i*i<N;i++){}
        return i-1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
