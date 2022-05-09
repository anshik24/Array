class Solution{
public:	
	// Program for zig-zag conversion of array
	void swap(int arr[],int i,int j){
	    int temp=arr[i];
	    arr[i]=arr[j];
	    arr[j]=temp;
	}
	void zigZag(int arr[], int n) {
	    // code here
	    for(int i=0;i<n-1;i++){
	        if(i%2==0){
	        if(arr[i]>arr[i+1]){
	        swap(arr,i,i+1);
	    }
	        }else{
	    if(arr[i]<arr[i+1]){
	        swap(arr,i,i+1);
	    }
	    }
	}
	}
};
