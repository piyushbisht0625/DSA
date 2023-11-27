#include<bits/stdc++.h>
using namespace std;




// Find first repeated element  

int FirstRepeated(int* arr, int n){
    unordered_map<int, int >hash;
    for(int i =0; i<n; i++){
        hash[arr[i]]++;

    }

    for(int i=0; i<n; i++){
        if (hash[arr[i]] >1)
         return i+1;
    } 
    return -1;
}


int main(){
    int arr[]= {1,2,3,4,4,5,6,7,8,4};
    int n = sizeof(arr)/sizeof(int);


    cout<<"The  ans  of thr first repeated index is  " << FirstRepeated(arr,n);

}
