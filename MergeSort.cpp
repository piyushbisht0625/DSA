#include<bits/stdc++.h>
using namespace std;


void Merge( int *arr, int s, int e){

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    //Copy values;
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;

    }
     k = mid + 1;
    for (int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];

        }
        else{

            arr[mainArrayIndex++] = right[rightIndex++];
        }

    }

    //Copy logic for left array 
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];

    }

    // copy logic for right array 
    while(rightIndex < len2){
          arr[mainArrayIndex++] = right[rightIndex++];
    }
}

void mergeSort(int*arr, int s, int e){
    //Base case
    // s==e -> single element
    // s>e -> invalid array
    if(s>=e)
    return;

    int mid = (s+e)/2;

    //left part solve using recursion

    mergeSort(arr, s, mid);
    //right part solve using recursion

    mergeSort(arr, mid+1, e);

    // Now merge two sorted array
    Merge(arr,s,e);

} 



int main(){
    int arr[] = {2,5,3,7,2,12,50,16,45,87,60,10};
    int n = 12;

    int s =0;
    int e = n-1; 

    mergeSort( arr, s, e);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;


}
