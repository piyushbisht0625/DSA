#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        
        int g1,s1,b1,g2,s2,b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;

        int country1=g1+s1+b1;
        int country2=g2+s2+b2;

        if(country1 > country2){
            cout<<1;
        }
        else{
            cout<<2;
        }
    }
    return 0;
}
