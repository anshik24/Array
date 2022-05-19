// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        int p=0;
        for(int i=0;i<N;i+=2){
            p+=K;
        }
        return p;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends
