#include<bits/stdc++.h>
using namespace std;
int pallindrome(int arr[],int size){
    for(int i=0;i<size;i++){
        int temp=arr[i];
        int ans=0;
        int r=0;
        while(temp>0){
            r=temp%10;
            ans=(ans*10)+r;
            //temp=temp/10;
            temp/=10;
        }
        if(ans!=arr[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int arr[]={111,222,333};
    int size=sizeof(arr)/sizeof(int);
    cout<<pallindrome(arr,size);
    return 0;
}