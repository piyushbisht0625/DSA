#include<bits/stdc++.h>
using namespace std;
int subarraysum(int arr[],int n){
     int finalmax=INT_MIN;
    int currentsum=0;
    for(int i=0;i<n;i++){
        currentsum +=arr[i];
    }
    if(currentsum > finalmax){
        finalmax=currentsum;
    }
    if(currentsum < 0){
        currentsum=0;
    }
    return finalmax;
}
int main(){
    int n;
    cout<<"enter the size"<<" ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<subarraysum(arr,n);
   return 0;
}