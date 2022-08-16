class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        // code here
        vector<int>v;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            v.push_back(arr[i]);
            v.push_back(arr[n-1-i]);
        }
        for(int i=0;i<n;i++){
            arr[i]=v[i];
        }
    }
