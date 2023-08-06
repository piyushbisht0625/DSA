//find two non-repeating elements in an array where every repeats twice
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,1,4,3,5,1,2};
    int size=sizeof(arr)/sizeof(int);
    int xorsum=0;
    int first,second;
    for(int i=0;i<size;i++){
        xorsum^=arr[i];
    
    if(arr[i]&1==1){
         first=arr[i]^xorsum;
    }
    else{
        second=arr[i]^xorsum;
    }
  }
  cout<<"first non repeating is"<<" "<<first<<endl;
  cout<<"second non repeating is"<<" "<<second<<endl;
  return 0;

}