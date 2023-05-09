#include<bits/stdc++.h>
using namespace std;

int SecondLargest(vector<int> &arr, int n){
    int largest = arr[0];
    int slargest = -1;
    
    for(int i= 1; i<n; i++){
        if(arr[i] > largest){
            slargest = largest;//  secondlargest will take largest
            largest = arr[i]; // replace the largest;
        }
        
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main(){
    vector<int> arr = {2,5,10,3,5,4};
    int n = arr.size();

    cout<< " The Second Largest element is: " << SecondLargest(arr, n) <<endl;

    return 0;
}