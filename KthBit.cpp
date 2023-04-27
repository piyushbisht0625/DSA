#include<bits/stdc++.h>
using namespace std;

// Method 1 - Left Shift

void kthBit(int n, int k){
    if(n &(1 <<(k-1)) !=0)

    cout << "Yes Present!" <<endl;
    
    else{
        cout << "Not Present"<< endl;
    }
}

// Method 2- Right Shift 

void KthBit(int n, int k){
    if((( n >>(k-1)) & 1 )==1)

    cout << "Yes Present!" <<endl;
    
    else{
        cout << "Not Present"<< endl;
    }
}


int main(){
    int n = 13;
    int k = 3;

    kthBit( n, k);

}