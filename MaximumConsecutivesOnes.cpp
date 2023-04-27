#include<bits/stdc++.h>
using namespace std;

// method 1-(Naive approach)
// TC = o(n^2) & SC= o(1) auxillary  space

int MaxConsecutivesOne(bool arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        int curr = 0;
        for(int j=i; j<n; j++){
            if (arr[j]== 1)
             curr++;
            else break;
        }
        res = max(res,curr);
    }

    return res;
}

//Method 2- Efficient solution
// TC = o(n) & SC = o(1) 

int MaxConsecutivesONE(bool arr[], int n ){
    int res =0;  int curr =0;
    for(int i=0; i<n; i++){
        if (arr[i]== 0)
         curr =0;
        else{
            curr++;
            res = max(res,curr);
        }
    }
    return res;
}


int main(){

    bool arr[]= { 0,1,1,0,1,1,1,1,1,1,1 ,1};
    int n = sizeof(arr)/sizeof(bool);

    cout<< " The maximum consecutive ones are:- " << MaxConsecutivesONE(arr, n)<< endl;

}