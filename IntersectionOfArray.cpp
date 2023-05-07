#include<bits/stdc++.h>
using namespace std;

//TC = o(n1+n2) in worst case.
//SC = o(1)

vector<int> IntersectionArray(vector<int> &arr, vector<int> &brr){
    int n1 = arr.size();
    int n2 = brr.size();
    
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i< n1 && j< n2){
        if(arr[i] < brr[j])
         i++;
    
        else if(brr[j] < arr[i])
            j++;

        else{
            ans.push_back(arr[i]);// or brr[j any of them ]
            i++;
            j++;
        }
    }
    return ans;
    
} 

int main(){

vector<int> arr = {1,2,2,3,4,6,10};
vector<int> brr = {2,3,3,5,6,8,10};
int n1 = arr.size();
int n2 = brr.size();





vector<int> ans = IntersectionArray(arr, brr);
cout<< "The Intersection Of the Two array is: "<<endl;
for (int i = 0; i < ans.size(); i++)
				cout << ans[i] << " ";
	
}