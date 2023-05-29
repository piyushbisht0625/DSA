#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[100],n,nonzero=0;
    cin>>n;

    for(int i=0; i<n ;i++){
        cin>>nums[i];
    }
     
     
    for(int i =0; i<n; i++){
        if (nums[i]!=0){                    // shift zeros to the right
        swap (nums[nonzero++], nums[i]);
        }
      }

     for(int i=nonzero; i<n; i++){
        if (nums[i] == 0)                  // shift zeros to the  left
        swap (nums[nonzero++], nums[i]);
      }



    
   
    for(int i=0; i<n ;i++){
        cout<<nums[i] <<" ";
    }
}







