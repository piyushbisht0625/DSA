#include<bits/stdc++.h>
using namespace std;
void findCommon(int *arr1, int *arr2, int *arr3, int n, int m, int o){
    int i=0, j=0, k=0;
    while(i<n && j<m && k<o){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            cout<< arr1[i] <<" ";
            i++, j++, k++;
        }
        else if( arr1[i] <arr2[j]){
            i++;
        }
        else if( arr2[j] <arr3[k]){
            j++;
        }
        else{
            k++; 
        }
    }
}
int main(){
    int arr1[]=  {1,2,3,4,5,6};
    int n = sizeof(arr1)/sizeof(int);
    int arr2[]= {1,3,5,6,7,9,10};
    int m = sizeof(arr2)/sizeof(int);
    int arr3[]= {1,3, 5,10};
    int o = sizeof(arr3)/sizeof(int);

    findCommon(arr1, arr2, arr3, n, m, o);

}