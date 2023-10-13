
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int start, int end){
    //base case
    if(start >= end)
      return true;

     //Solve on Case
     if(str[start] != str[end]){
        return false;
     }

     //recursion will do rest
     return isPalindrome(str, start+1, end-1);

}

int main(){
    cout <<"Enter the string " << endl;
    string str;
    cin>>str;

    cout << isPalindrome(str, 0, str.size()-1) << endl;

}
