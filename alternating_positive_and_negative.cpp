#include<bits/stdc++.h>
using namespace std;
void alternate(int arr[],int n){
        int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]<0 && arr[j]>0){
            swap(arr[i],arr[j]);
            i++,j++;
        }
        else if(arr[i]>0 && arr[j]<0){
            i++,j++;
        }
        else if(arr[i]>0){
            i++;
        }
        else if(arr[j]<0){
            j++;
        }
    }
    if(i==0 && i==n){
        for(int m=0;m<n;m++){
            cout<<arr[m]<<" ";
        }
    }
    int k=0;
    while(k<n && i<n){
        swap(arr[k],arr[i]);
        k+=2;
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,-4,-1,4};
    int n=6;
    alternate(arr,n);
    return 0;
}