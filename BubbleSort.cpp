      // Bubble Sort 
#include<bits/stdc++.h>

using namespace std; 
 
  
   
int main(){   
  
 
        
     vector<int> arr {11,13,15,78,2,4,100,67,56,59,10,1,7,6,14,9,90,23,45};   // input array
    int n = arr.size(); // calculate size
 
    for(int round =1; round <n-1; round++){
        
        for(int j=0; j< n-round; j++){ 

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); // swaping j with j+1
            }
        }
    }

    //Printing
    for( int i = 0; i<n; i++){
        cout << arr[i] <<" ";

    }
    cout << endl;


}
