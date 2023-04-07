#include<bits/stdc++.h>
using namespace std;

void reverse(string &str, int start, int end ){
    //Base case
    if(start >= end)
      return;

    //solve one case
    swap(str[start], str[end]);

    //Recursiion will do rest
    reverse(str, start+1, end-1);
}


int main(){
    cout << " Enter the string " <<endl;
    string str;

    cin>> str;

 reverse(str, 0, str.size()-1 );
 cout <<  str << endl;


}