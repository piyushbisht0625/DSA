#include<bits/stdc++.h>
using namespace std;

vector<int>shuffleArray(vector<int> &arr, int n){
        vector<int> v;
        for(int i=0; i<n; i++){

            v.push_back(arr[i]);
            v.push_back(arr[i+n ]);
        }
        
        return v;
}

int main(){

vector<int> arr{2,5,1,3,4,7,8,10};
int n = arr.size()/2;

vector<int>ans=shuffleArray(arr,n);
for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
}
return 0;
}