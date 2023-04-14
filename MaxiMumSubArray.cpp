#include<bits/stdc++.h>
using namespace std;

//KADANE'S Algorithm (Maximun SubArray sum)
// A Subarray is a contiguous part of an array

int maxSubArray(vector<int> &arr){
    int sum = 0;
    int maxi = arr[0];

    for(int i =0; i<arr.size(); i++){
        sum = sum + arr[i];

        maxi = max(maxi, sum);

        if(sum < 0)
         sum = 0;
    }
    return maxi;
}

int main(){
    vector<int> arr{ 5,4,-1,7,8};
    
     cout << " The sum of Maximum Array is: " << maxSubArray(arr) << endl;

}