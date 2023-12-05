 
#include<bits/stdc++.h>
using namespace   std;
 

int Merge( int *arr, int s, int e){
    int inv = 0;

    int mid = (s+e)/2; 

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    // Copy values;
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

    // merge logic below 
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while ( leftIndex < len1 && rightIndex < len2){
        if ( left[leftIndex] <= right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];

        }
        else{

            arr[mainArrayIndex++] = right[rightIndex++]; 
            //inversion found hre
            //as arr[i]> arr[j]
            inv += len1 - leftIndex ;
        
            
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

    
    return inv;
} 



int mergeSort(int*arr, int s, int e){
    int inv = 0;
    
    //Base case
    // s==e -> single element
    // s>e -> invalid array
    if(s < e){
         int mid = (s+e)/2; 
    
     
    //left part solve using recursion

     inv += mergeSort(arr, s, mid);
    //right part solve using recursion

     inv += mergeSort(arr, mid+1, e);

    // Now merge two sorted array
    inv += Merge(arr,s,e);
    
    }

    return inv; 

} 


 
int main(){
    int arr[] = {8,4,2,1 };
    int n = sizeof(arr)/ sizeof(arr[0]) ;

    int s =0;
    int e = n-1; 

     cout << mergeSort( arr, s, e);

   
    cout << endl;


    return 0;


}
 
