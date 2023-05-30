#include<bits/stdc++.h>
using namespace std;
void threepartition(int arr[],int n,int a,int b){
    int l=0;
    int h=n-1;
    int i=0;
    while(i<=h){
        if(arr[i]<a){
            swap(arr[i],arr[l]);
            i++,l++;
        }
        else if(arr[i]>b){
            swap(arr[i],arr[h]);
                h--;
            
        }
    }
}
int main(){
    int arr[]={ 6,3,2,1,5};
    int n=sizeof(arr)/sizeof(int);
    int a=3;
    int b=4;
     threepartition(arr,n,a,b);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
    return 0;
}