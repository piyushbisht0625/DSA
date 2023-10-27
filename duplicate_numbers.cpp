#include<bits/stdc++.h>
using namespace std;


void duplicate(int arr[],int n){ 
    int check[100]={};
    for(int i=0;i<n;i++){
        check[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(check[i] >= 2){
            cout<<"Duplicate is"<<" "<<i<<endl;
        }
        if(check[i]==0){
            cout<<"Missing is"<<" "<<i<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of array"<<" ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
    duplicate(arr,n);
    return 0;
}
