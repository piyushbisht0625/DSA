

#include<bits/stdc++.h>
using namespace std;

void reversed( vector<int> &arr, int low, int high){
    while(low< high){
        swap(arr[low], arr[high]);
        low++; high--;
    }
}

void LeftRotate(vector<int> &arr, int n, int d){
    reversed(arr,0,d-1);
    reversed(arr, d ,n-1);
    reversed(arr, 0, n-1);
}

int main(){

    vector<int> arr = { 1,2,3,4,5};

    int d =2;
    int n = arr.size();
    //Function Call
     LeftRotate(arr,n, d);
     cout<<" The new  array is:- " << endl;
     for(int i=0; i<n; i++){
        cout <<arr[i] <<" ";
     }
     cout <<endl;


}
