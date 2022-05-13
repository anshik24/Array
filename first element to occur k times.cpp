class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int>m;
    
        for(int i=0;i<n;i++){
            if(m[a[i]]){
            m[a[i]]++;
        if(m[a[i]]==k){
            return a[i];
        }
        }
        else{
            m[a[i]]=1;
            if(m[a[i]]==k)
            return a[i];
        }
            }
        
        return -1;
    
    }
};
