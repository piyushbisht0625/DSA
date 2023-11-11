#include<bits/stdc++.h>
using  namespace std;

void Uppercase( char arr[]){ 

    int n = strlen(arr);
    for (int i = 0; i<n; i++){
        arr[i] =arr[i]-'a' + 'A';
    }
}




int main(){

char arr[100];
cin.getline(arr, 100);
Uppercase(arr);

cout << arr << endl;

 
return 0;


}

