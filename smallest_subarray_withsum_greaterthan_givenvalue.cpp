#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,10,5,2,7};
    int n=sizeof(arr)/sizeof(int);
    int x=9;
    int sum=0;
    int minimum=INT_MAX;
    int i=0,j=0;
    while(i<=j && j<n){
        while(sum<=x && j<n){
            sum+=arr[j];
            j++;
        }
        while(sum>x && i<j){
            minimum=min(minimum,j-i);
            sum-=arr[i];
            i++;
        }
    }
    cout<<minimum;
    return 0;
}