
#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &arr, int& n, int i){
    //Base case
    if(i == n-1)
        return true; 

    //1 case solve kra h 
    if(arr[i+1] < arr[i])
        return false;

    //Baki recursion will do
    return checkSorted(arr, n , i+1);
}




int main(){
    vector<int> arr{10,20,30,40,55};
    int n = arr.size();
    int i = 0;

    bool isSorted = checkSorted(arr, n, i);

    if(isSorted){
        cout << " Array is Sorted" << endl;

    }
    else{
        cout << "Array is not Sortedd" << endl;
    }

}
