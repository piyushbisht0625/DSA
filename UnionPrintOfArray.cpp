#include <bits/stdc++.h>
using namespace std;

//TC = o(m+n)
//SC = o(1) 

void UnionArray(int arr[], int brr[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (arr[i] < brr[j])
            cout << arr[i++] << " ";
 
        else if (brr[j] < arr[i])
            cout << brr[j++] << " ";
 
        else {
            cout << brr[j++] << " ";
            i++;
        }
    }
 
    // Print remaining elements of the larger array //
    // when brr array is exhausted

    while (i < n1)
        cout << arr[i++] << " ";

    // when arr array is exhausted.

    while (j < n2)
        cout << brr[j++] << " ";
}
 

int main()
{
    int arr[] = { 1, 2, 3 ,4, 5, 8 };
    int brr[] = { 2, 3, 5, 7 };
 
    int n1  = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(brr) / sizeof(brr[0]);
 
    // Function calling
    UnionArray(arr, brr, n1, n2);
 
    return 0;
}