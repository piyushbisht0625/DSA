#include <bits/stdc++.h>
using namespace std;
int merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1]; //temporary arrays
    int b[n2];

    int inversion = 0;

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;
    
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++, k++;
        }
        else
        {
            arr[k] = b[j];
            inversion += n1 - i;
            k++, j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++, k++;
    }
    while (i < n2)
    {
        arr[k] = b[i];
        j++, k++;
    }

    return inversion;
}
int mergesort(int arr[], int l, int r)
{
    int inversion = 0;
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;

        inversion += mergesort(arr, l, mid);
        inversion += mergesort(arr, mid + 1, r);
        inversion += merge(arr, l, mid, r);
    }

    return inversion;
}
int main()
{
    int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    cout << mergesort(arr, 0, n - 1);
    return 0;
}