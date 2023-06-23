//this is basically a problem based on sliding window approach
#include<bits/stdc++.h>
using namespace std;
int minswaps(int arr[],int n,int k){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            count ++;
        }
    }
    int c=0,res=0;
    for(int i=0;i<count;i++){
        if(arr[i]>k){
            c++;
        }
    }
    res=c;
    int i=0,j=0;
    while(j<n){
        if(arr[i]>k){
            c--;
        }
        if(arr[j]>k){
            c++;
        }
        res=min(res,c);
        i++,j++;
    }
    return res;
}
 int main(){
     int arr[]={2,1,5,6,3};
     int n=sizeof(arr)/sizeof(int);
     int k=3;
     cout<<minswaps(arr,n,k);
     return 0;

 }