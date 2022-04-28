// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
   int tp=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==1){
        tp = mid;
        high=mid-1;
        }
    else    
    low=mid+1;
    }
    return tp;
}
  //or
//  ---------both solution are correct==============================
for(int i=0;i<n;i++){
    if(arr[i]==1)
    return i;
}
    return -1;

