lass Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        long long res=0;
        long long int m = 1000000007;
        for( long long  int i=0;i<n;i++){
            res+=(a[i]*i)%m;
        }
        return res%m;
    }
};
