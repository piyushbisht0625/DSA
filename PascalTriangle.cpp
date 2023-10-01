#include<bits/stdc++.h>
using namespace std;
 
void pascaltriangle(int row_num){
 
    // Loop to print each row
    for(int n = 1; n <= row_num; n++){
 
        // Loop to print spaces for triangular display
        for(int r = 1; r < row_num-n+1; r++)
            cout<<"  ";
 
        // Loop to print values using the Combinations formula
        int val = 1;
        for(int r = 1; r <= n; r++){
            cout<<val<<"   ";
             
            val = val * (n - r)/r;
        }
        cout<<endl;
    }
}
 
int main(){
 
    int row_num = 5;
    pascaltriangle(row_num);
 
    return 1;
}