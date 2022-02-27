//Sum of Array in C++  -------------------------------------------------

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cout<<" enter value of n /n :";
    cin>>n;
    cout<<"enter array"<<" ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for (int i=0;i<n;i++){
         sum  = sum + arr[i];
        
    }
    cout<<sum<<endl;
    return 0;
    }
