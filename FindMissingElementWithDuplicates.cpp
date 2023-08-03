# include<bits/stdc++.h>
using namespace std;

                  //Method - 1

//Finding missing element from a array with duplicate. 
// This is visited method 
//when element of array are treated as index  elment are from 1 to N
// arr[i]=[1,N], where N = size of array

void findMissingElement(vector<int> &arr, int n){
   for(int i =0; i<n; i++){
    int index = abs(arr[i]);
    // because element are starting from 1 but index of array stars with 0.
    if(arr [index -1] > 0){
        arr[index - 1] *= -1; // marked visited
    }

   }

// all positive indexes are missing

   for(int i=0; i<n; i++){
    if(arr[i] > 0)
      cout << i+1 << " ";
   } 

}


int main(){

    vector<int> arr{1,3,3,5,4};
    int n = arr.size();

    findMissingElement(arr,  n);

    return 0;
}
