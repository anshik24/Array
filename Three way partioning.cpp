class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int n=array.size();
        int low=0 ,mid=0,high=n-1;
        while(mid<=high){
            if(array[mid]<a){
                swap(array[mid++],array[low++]);
            }
            else if(array[mid]>b){
                swap(array[mid],array[high--]);
            }
            else{
                mid++;
            }
        }
        
        
    }
};
