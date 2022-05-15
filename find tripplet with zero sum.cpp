bool findTriplets(int arr[], int n)
    { 
        //Your code here
        bool check =false;
        sort(arr,arr+n);
        
        for(int i=0;i<n-1;i++){
            int l =i+1;
            int r = n-1;
            while(l<r){
                if(arr[i]+arr[l]+arr[r]==0){
                return true;
                l++;
                r--;
            }
            else if(arr[i]+arr[l]+arr[r]<0){
                l++;
            }
            else{
                r--;
            }
            
        }
        }
        if(check==false)
        return false;
    }
};
