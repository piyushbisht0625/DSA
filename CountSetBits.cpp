#include<bits/stdc++.h>
using namespace std;

// Method 1 - Naive Solutionn
//TC = Theta(Total Bits in N)

int CountSetBits(int n){
    int res =0;
    while(n > 0){
        // Last bit is set or not
        if(n % 2!=0) 
        // last bit is set
        // we can use bitwise  AND = if((n&1 ==1)
        res++;
        //remove last bit
        n = n/2;
        // similary we can use right shift here 
        // (n= n>>1) will give the same  result

    }
    return res;
   
}
int main(){
    int n= 13;
    cout<< " The total Setbits Present is: " << CountSetBits(n)<< endl;


}