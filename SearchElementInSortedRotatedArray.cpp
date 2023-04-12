#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low + high) >> 1;
        if(arr[mid]==target){
            return mid;
        }

        if(arr[low] <= arr[mid]){
            // it means left part is sorted

            if(arr[low]<=target && arr[mid] >= target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
         }
         else{
             // it means right part is sorted

             if(arr[mid]<=target && target <=arr[high]){
                 low=mid+1;
             }
             else{
                 high=mid-1;
             }
         }

    }
    return -1;
}
signed main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);
     int target;
     cout<<"Enter the target"<<" ";
     cin>>target;
     cout<<binarySearch(arr,n,target);
    return 0;
}