class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         if(n<3)
         return -1;
         /*
         int first =a[0],second=INT_MIN,third=INT_MIN;
         for(int i=1;i<n;i++){
             if(a[i]>first){
                 third =second;                            // TWO SOLUTIONS
                 second=first;
                 first=a[i];
                 
             }
             else if(a[i]>second && a[i]<first){
                 third = second;
                 second=a[i];
             }
             else if(a[i]>third){
                 third = a[i];
             }
         }
         return third;*/
         sort(a,a+n);
         return a[n-3];
    }

};
