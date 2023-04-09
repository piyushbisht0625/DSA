#include<bits/stdc++.h>
using namespace std;

void lastOccLTR(string &str, char x, int i, int&ans){
    //Base Case
    if(i >= str.size())
      return;

    //Solve one Case
    if(str[i] == x){
        ans = i;
    }

    // Recursion will do rest 
    lastOccLTR(str, x, i+1, ans);



}
//Second Approach Right to left 

void lastOccRTL(string &str, char x, int i, int&ans){
    //Base Case
    if(i <  0)
      return;

    //Solve one Case
    if(str[i] == x){
        ans = i;
        return;
    }

    // Recursion will do rest 
    lastOccRTL(str, x, i-1, ans);


    
}


int main(){
    


    string str;
    cout <<" Enter string " << endl;
    cin>>str;

    cout <<"Enter the character to be searched " << endl;
    char x;
    cin>> x;

    int ans = -1;
    //lastOccLTR( str,x, 0, ans);
    lastOccRTL( str,x, str.size() -1, ans);  
    cout << "The index of this searched character is at " << ans <<endl;

}