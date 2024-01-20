  #include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{23, 12,34,45,56,67,78,89,90,123,2,3,46,68,98,76,54,32,21,10, ,33,22,100}; 
    int n = arr.size();

    //insertion sort
    for(int round =1; round < n; round++){
        //Step 1:- Fetch
        int value = arr[round];

        //Step 2:- Compare
        int j= round -1;
        for (; j>=0; j--){

            if(arr[j] > value){
                // Step 3:- Shift
                arr[j+1] = arr[j];
            }
            else {
                //rukjao
                break;
            }
        }
        // Step:- Copy
        arr[j+1] = value;
    }

    //Printing
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;


      
}
