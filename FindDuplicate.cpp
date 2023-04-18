#include<bits/stdc++.h>
using namespace std;

// Method 1 - Visited Method

int findDuplicate(vector<int> &arr){
    int ans = -1;
    for(int i =0; i<arr.size(); i++){
        int index = abs(arr[i]);

        //Already Visited
        if(arr[index] < 0){
            ans = index;
            break;
        }
        // visited mark
        arr[index] *= -1;

    }
    return ans;
}

// Method 2 - Positioning Method

int FindDuplicate(vector<int> &arr){
    while(arr[0] != arr[arr[0]]){
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

//Method 3- using sort stl

int Duplicate(vector<int> &arr){
    sort(arr.begin(), arr.end());
    for(int i =0; i<arr.size(); i++){
        if(arr[i] == arr[i+1])
        return arr[i];
    }
    return -1;
}


 int main(){
    vector<int> arr{1,3,3,4,5,6,3};

     cout<< " The duplicate number is "<< Duplicate(arr) <<endl;
    

 }