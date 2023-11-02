#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int k){
 
    int n = arr.size();
    vector<int> temp(arr.size());

    for(int i =0; i<arr.size(); i++){
        temp[(i+k)% arr.size()] = arr[i];
    }
    //copy temp into arr vector
    arr = temp;
}

int main(){
    vector<int> arr{1,2,3,4,5,6,7};
    
    int k;
    cout << " Enter  value of k:- ";
    cin>>k;
    // function call
    rotateArray(arr, k);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

}
