#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int n,int m){
    int i=n-1;
     int j=0;
    while(i>=0 && j<m){
       if(a[i] > b[j]){
           swap(a[i],b[j]);
       }
       else{
           break;
       }
    }
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    
    
}
int main(){
    int n,m;
    cout<<"enter the value of n and m"<<" ";
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    merge(a,b,n,m);
    return 0;
}