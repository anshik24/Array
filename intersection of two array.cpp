class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
   unordered_set<int>s;
   for(int i=0;i<n;i++){
       s.insert(a[i]);
   }
   unordered_set<int>s1;
   for(int i=0;i<m;i++){
       if(s.count(b[i])){
           s1.insert(b[i]);
       }
   }
    return s1.size();
    }
