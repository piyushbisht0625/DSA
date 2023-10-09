 #include<bits/stdc++.h>
using namespace std;

void moveZeroes(int *arr, int n){
    int nonZero=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[nonZero++]);
        }
    }
}

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[100], n;
    cout<<"Enter the number:- ";
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    moveZeroes(arr, n);
    printArr(arr, n);

}
