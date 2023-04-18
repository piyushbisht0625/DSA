#include<bits/stdc++.h>
using namespace std;

 // QUICKSORT- last element is the pivot element 

void QuickSort(int * arr, int start, int end){

    //Base case
    if(start >= end)
     return;

    //One case solve

    int pivot = end;
    int i = start -1;
    int j = start;

    while(j < pivot){
     if(arr[j]< arr[pivot]){
        i++;
        swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    
    // i is the right position for the pivot element
    swap(arr[i], arr[pivot]);

    //Recursion will solve rest
    //Left part

    QuickSort(arr, start, i-1);
    //Right part

    QuickSort(arr, i+1, end);

                }

int main(){

    int arr[] = {6,5,4,3,-1,0,-6,-7,56,3,4,5,6,5,6,12,23};
     int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;

    QuickSort(arr, start, end);
    for(int i =0; i<n; i++){
        cout << arr[i] <<" ";
    }
    

}