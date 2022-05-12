long long int product(int ar[], int n, long long int mod)
 {
     
     //code here
     long long prod=1;
     for(int i=0;i<n;i++){
         prod=(prod*ar[i])%mod;
     }
     return prod;
     
 }
