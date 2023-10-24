#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k){
     
    //Base condtion
    if(n==1)

    return 0;

    else{
        //% so n, do not go out of range (0 - n-1)
        
        return (josephus(n-1,k)+k)% n;
    }
        
}


int main(){
    int n =5;
    int k = 3;

    cout<< josephus(n,k)<< endl;

}
