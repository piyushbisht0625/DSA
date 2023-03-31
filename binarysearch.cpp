#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int s, int e){
    for(int i =s; i<=e; i++){
        cout <<arr[i] <<" ";
    }cout << endl;
}




 int binarySearch(int arr[], int s, int e, int k){
    cout <<endl;
    print(arr,s ,e);   

    //base case

    //element not found
    if (s>e)
        return false;
    
    int mid = s + (e-s)/2;
    
    cout<< "value or arr mid is "<< arr[mid] << endl;

    //element found
 
    if (arr[mid]==k)
        return true;
 
    if (arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main(){

    int arr[6]={2,4,6,10,14,18};
    int size = 6;
    int key =18;

     int ans = binarySearch(arr, 0, size-1, key);
     if (ans){  
     cout<<"Key found in Array:" <<endl;
     }

     else{
        cout <<"Key not Found";
     }

    return 0;
}