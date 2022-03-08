Print alternate elements of an array 
School Accuracy: 50.02% Submissions: 66654 Points: 0
You are given an array A of size N. You need to print elements of A in alternate order (starting from index 0).

Example 1:

Input:
N = 4
A[] = {1, 2, 3, 4}
â€‹Output:
1 3
Example 2:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
â€‹Output:
1 3 5
Your Task:
Since this is a function problem, you just need to complete the provided function void print(int ar[],int n)

Constraints:
1 <= N <= 105
1 <= Ai <= 105

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


//code
#include<iostream>
using namespace std;


void print(int ar[], int n)
{
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<ar[i]<<" ";
        }
    }
}
    int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int ar[1000001]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>ar[i];
    }
    print(ar,n);
    cout<<endl;
    }
    return 0;
    }
