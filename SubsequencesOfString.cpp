 #include<bits/stdc++.h>  
 using namespace std;

 void printSubsequences(string str, string output, int i, vector<string> &v){
    //Base case
     
    if(i >= str.length()){
    //cout << output << endl;
    v.push_back(output);
        return ;
    }

    //exclude 
    printSubsequences(str, output, i+1, v);

    //include
    //output.push_back(str[i]);
    output = output + str[i];//either this or above both are valid
    printSubsequences(str, output, i+1, v);


 }

 int main(){
    string str = "abc";
    string output = " ";
    vector<string> v;


    int i = 0;
    printSubsequences(str, output, i, v);

    cout<<"printing all Subsequences" << endl;
    
    for (auto val: v){
        cout << val <<" ";
    }

    cout << endl << "Size of vector is: " << v.size() << endl;


    return 0;

 }