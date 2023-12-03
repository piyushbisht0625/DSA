#include<bits/stdc++.h>
using namespace std;
 
//METHOD =2 => (Sorting + Swapping method)
  
void FindElement( vector<int> &arr, int n){
    int i = 0;
    while(i <n){
        int index = arr[i]-1; 
        if(arr[i] != arr[index]){
            swap(arr[i], arr[index]);  
        }
        else{
            i++; 
        }
    }

    for(int i =0; i<n; i++){
        if(arr[i] != i+1){//missing
            cout << i+1 << " ";
        }
    }
    cout << endl;
}

int main(){

    vector<int> arr{1,2,4,5,4};
    int n = arr.size();

    FindElement(arr,n);

    return 0;
}
