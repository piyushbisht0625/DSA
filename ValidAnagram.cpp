#include<bits/stdc++.h>
using namespace std;

bool Anagram( string s, string t){
    int freqTable[256] = {0};
    for(int i=0; i< s.size(); i++){
        freqTable[s[i]]++;

    }

    for(int i=0; i<t.size();i++){
        freqTable[t[i]]--;
    }
    for(int i =0; i<256; i++){
        if(freqTable[i] !=0){
            return false;
        }
        

    }
    return true;

}
 
 int main(){
    string s;
    
    cin>> s;

    string t;
    cin>> t;
    
    // funtion call 
    Anagram( s, t);

    if(Anagram){
        cout << " The two string are anagram to each other" << endl;

    }
    else{
       cout << " The two string are not anagram to each other " << endl;
    }

    


 


 }