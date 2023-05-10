#include<bits/stdc++.h>
using namespace std;

int SecondSmallest(vector<int> &arr, int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for(int i =1; i<n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        
        else if(arr[i] != smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;

}


int main(){
    vector<int> arr = {2,5,10,3,5,4,6};
    int n = arr.size();

    cout<< " The Second Smallest element is: " << SecondSmallest(arr, n) <<endl;

    return 0;

}