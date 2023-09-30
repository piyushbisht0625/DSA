#include<bits/stdc++.h>

using namespace std;

int main(){
    //TRIPLET SUM CODE
vector<int> arr{10,20,20,40,50};
int target = 100;

for(int i =0; i< arr.size(); i++){
    int element1 = arr[i];

    for(int j= i+1; j<arr.size(); j++){
        int element2 = arr[j];

        for(int k =j+1; k<arr.size(); k++){
            int element3 =  arr[k];

            if(element1+ element2 + element3 == target){
                cout << element1 << ", "<< element2 << ", " << element3 << endl;
            }
        }
    }
}

}
