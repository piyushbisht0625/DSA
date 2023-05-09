#include<bits/stdc++.h>
using namespace std;

int SetBits(int n, int k){
    int mask = 1 << k; // left shift by k 
    int ans = n | mask;// bitwise or with the mask obtained.
    // also one single line  to above would be 
    // return (n | (1<<k))

    return ans;
}

int main(){
    int n = 10;
    int k = 2;

    cout << "The result is " << SetBits(n, k)<< endl;

}