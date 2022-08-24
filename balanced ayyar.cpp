class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       
       int suma=0,sumb=0;
       for(int i=0;i<n;i++){
           if(i<n/2){
           suma+=a[i];
          }
          else{
           sumb+=a[i];
       }
       }
       return abs(suma-sumb);
    }
};
