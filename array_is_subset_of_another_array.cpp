#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter the size of m and n";
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    int count=0;
    for(int i=0;i<m;i++){
        if(mp[b[i]]){
            count++;
        }
    }
    if(count!=n){
        cout<<"no";
    }
    else{
        cout<<"yes";
    }
    return 0;
}