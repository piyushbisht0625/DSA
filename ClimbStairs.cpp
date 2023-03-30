#include<bits/stdc++.h>
using namespace std;

int climbingStairs(int n){
    if( n == 0 || n == 1){
        return 1;
    }


    return climbingStairs(n-1)+climbingStairs(n-2);
}


int main(){

    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    cout<<climbingStairs(n)<<endl;
}