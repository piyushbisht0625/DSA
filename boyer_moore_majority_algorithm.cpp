#include<bits/stdc++.h>
using namespace std;
int find_candidate(int arr[],int size){
    int maj_index=0;
    int count =1;
    for(int i=1;i<size;i++){
        if(arr[maj_index]==arr[i+1]){
            count++;  //same next element
        }
        else{
            count--;   //Different next element
        }  
        if(count==0){
            maj_index=i;   //set maj_index with the index
            count =1;   //reset count again
        }
    }
    return arr[maj_index];   //return the possible candidate

}

bool ismajority(int arr[],int size,int candidate){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==candidate){
            count++;
        }  
    }
    if(count > size/2){
        return 1;
    }
   return 0;
}

void print(int arr[],int size){
    int candidate=find_candidate(arr,size);
    if(ismajority(arr,size,candidate)==1){
        cout<<"Majority element is"<<" "<<candidate<<endl;
    }
    else{
    cout<<"No Majority element found";
    }
}
int main(){
    int arr[]={5,1,4,1,1,5,5,5,5,5};
    int size=sizeof(arr)/sizeof(int);
    print(arr,size);
    return 0;
}