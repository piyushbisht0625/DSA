#include<bits/stdc++.h>
using namespace std;
int main(){
    
    for (int row=0; row<7; row++){
        if(row==0||row==4){
            for(int col =0; col<4; col++){
                cout<< " * ";
            }
        }
        
    
        else{
            cout<<"*";
            for(int col =0; col<4; col++){
                cout<<"  ";
            }
            cout<<" * ";
        
        }
        cout<<endl;
        
    }
    
}