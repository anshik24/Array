class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
    k=min(k,n);
    int temp=0;
    while(temp<=n){
        reverse(arr.begin()+temp,min(arr.begin()+temp+k,arr.end()));
        temp+=k;
    }
    }
};
