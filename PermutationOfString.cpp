#include<bits/stdc++.h>  
using namespace std;

void printPermutation(string &str, int i){
    //Base case
    if( i>= str.length()){
        cout << str <<" ";
        return;
    }

    //Swapping 
    for(int j=i; j <str.length(); j++){
        //swap
        swap(str[i], str[j]);

        //recursive call
        printPermutation(str, i+1);

        //backtracking - why? - to recreate the original input string as used reference variable not copy .
        swap(str[i], str[j]);
    }
} 

int main(){
    string str = "abc";
    int i =0;
    //function call
    printPermutation(str, i);
    return 0;


}