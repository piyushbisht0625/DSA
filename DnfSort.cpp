#include<bits/stdc++.h>
using namespace std;

// Swap function
/*void swap(vector<int> &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}*/
//This is sort (0s 1s and 2s) also called sort color
//this algo or sort is also called dutch national flag due to three color present in it
// TC = o(n)

 void DnfSort(vector<int> &arr, int n){
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;

    while(mid <= high){
        if(arr[mid] == 0){   
            swap(arr[low], arr[mid]);
            low ++;  mid ++; 
        }
        else if(arr[mid] == 1){
            mid ++;
        }
        else{
            swap(arr[mid], arr[high]);
            high --;
        }
    }
}

int main(){

    vector<int> arr{1, 0,2,1,0,0,2,2,1,0,1,1,2,0,2,1,1,2,0,2,2,1,1,0};
    int n = arr.size();

    DnfSort(arr,n);

    cout<< "The new sorted array  is: " <<endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } 
}