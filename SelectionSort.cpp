#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{15,64,3,20,1};
    int n = arr.size();

    //selction sort
    // outer loop -> (n-1) rounds 
    for(int i =0; i<n-1; i++){

        int minIndex =i;
        //inner loop-> index of minimum element in range i->n;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        //Swap
        swap(arr[i], arr[minIndex]);
    }


    //Printing
    for(int i =0; i<n; i++){
       
        cout  << arr[i] << " ";
    }
    cout<< endl;    
}