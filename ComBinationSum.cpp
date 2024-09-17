#include <bits/stdc++.h>
using namespace std;

void CombinationSumHelper(vector<int> &input, int target, vector<int> &ds, vecto<vector<int>> & 
ans, int index){

    //Base condition 
	 
    if (target == 0){ 
        ans.push_back(ds); 
        return;    
    }  
	 

    if(target <0){  
        return;
    }
	

    //(include or exclude), (pick unpick method) used

    for(int i= index; i<input.size(); i++){
        //store in our data structure
        ds.push_back(input[i]);

        //Recursive Call
        CombinationSumHelper(input, target-input[i], ds, ans, i);

        //BackTracking 
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &input, int target) {
	      
	vector<int> ds;
	vector<vector<int> > ans;
	CombinationSumHelper(input, target, ds, ans, 0);
	return ans;
}
int main() {
	vector<int> input{2,3,5};
	
	int n = input.size();

	int target = 8; 
	vector<vector<int> > ans = combinationSum(input, target);
	
	for (int i = 0; i<ans.size(); i++) {
		
			cout << " [ ";
			for (int j = 0; j <ans[i].size(); j++)
				cout << ans[i][j] << " ";
			cout << "]\n";
		}
	
	return 0;
}
