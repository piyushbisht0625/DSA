#include<bits/stdc++.h> // Header file 
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;

        if(a1==a2&& a2==a3 && a3==a4){
            cout<<0<<"\n";
        }
        else if((a1==a2 && a2==a3) || (a2==a3 && a3==a4) || (a3==a4 && a4==a1) || (a4==a1 &&a1==a2)){
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
    }
    return 0;
}
