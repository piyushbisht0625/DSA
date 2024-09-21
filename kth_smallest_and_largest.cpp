  #include<bits/stdc++.h>
using namespace std;
priority_queue<int>maxh; 
int kthsmallest(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    return maxh.top();
}
int main(){
     int n;
    cout<<"enter the size"<<" ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the value of k"<<" ";
    cin>>k;
    cout<<kthsmallest(arr,n,k);
    return 0;
}
