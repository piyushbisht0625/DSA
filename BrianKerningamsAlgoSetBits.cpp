 # include<bits/stdc++.h>
using namespace std;

//IMPORTANT

// Brian Kerningam's Algorithm to count set bits

int CountBits(int n){
    int res =0;
    while(n>0){
        // Main Part - catch here is we gwt last bit turned off
        //  when we substract 1 from a number all the  bits which are zero after the last set bit they become (one) and last set become 0 from 1 .
        
        n = (n &(n-1));// (n-1) and bitwise AND with n
         res++;
    }
    return res;
}

int main(){
    int n =5;
    cout << " The total number of setbits is " << CountBits(n) <<endl;

}
