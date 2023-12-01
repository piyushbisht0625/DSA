#include<bits/stdc++.h>
using namespace std;


bool CanJump(vector<int> &arr){
    int n = arr.size();
    int rechable = 0;

    for(int i=0; i<n; i++){
        if(rechable <i)
        return false;

        rechable = max(rechable, i+arr[i]); // Update the rechable to new 
    }
    return true; // rechable>=i condition will return  true;

}

int main(){
    vector<int> arr{3,2,1,0,4};
    cout << CanJump(arr)<<endl;

}
