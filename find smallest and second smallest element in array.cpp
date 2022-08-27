vector<int> minAnd2ndMin(int a[], int n) {
   sort(a,a+n);
   int i=1;
   while(a[i]==a[0] && i<n){
       i++;
   }
   
       if(i==n)
    return {-1,-1};
    return {a[0],a[i]};
    }
