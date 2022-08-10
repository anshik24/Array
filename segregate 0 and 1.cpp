class Solution{   
public:
    void segregate0and1(int arr[], int n) {
       /* vector<int>ans;
       //  This is also right approach
       sort(arr,arr+n);
       for(int i=0;i<n;i++){
       ans.push_back(arr[i]);
       }*/
        int left=0,right=n-1;
       while(left<right){
           if(arr[left]==1){
               swap(arr[left],arr[right]);
               right--;
           }else{
               left++;
           }
       }
    }
};
