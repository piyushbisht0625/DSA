 
 #include<bits/stdc++.h>
 using namespace std;
 

 int jump(vector<int>& arr){

        int jump =0;
        int pos = 0;//position
        int des = 0;// destination
        for(int i=0;i<arr.size()-1; i++){
            des = max(des, arr[i]+i);// jump ki value m index add

            if(pos == i){
                pos = des;
                jump++;
            }
        }
        return jump;
    }
    
    int main(){
        vector<int> arr{2,3,0,1, 4};
        cout << " The minimum number of jump:- "  << jump(arr) << endl;
    }