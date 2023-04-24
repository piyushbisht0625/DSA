#include<bits/stdc++.h>
using namespace std;

// TC = o(n^2) Method 1 naive approach
void MovetoEnd(vector<int> &arr){
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i]== 0){

            for(int j =i+1; j<n; j++) {
                if (arr[j]!=  0)
                swap(arr[i], arr[j]);
            }
        }
    }
}
// Method 2
// Optimized approach 
// TC = 0(n)

void moveZeroes(vector<int> &arr){
     int n = arr.size();
    int nonZero=0; // count for non zero element and swap with the zero 
    
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }
}



int main(){
    vector<int> arr{ 10,5,0,0,8,1,-1,0,8,0};
    int n = arr.size();

    moveZeroes(arr);
     cout << " The array is:- " << endl;
     for(int i =0; i <n; i++){
        cout << arr[i] <<" ";
     }
     cout << endl;

}