# include<bits/stdc++.h>
using namespace std;

int solve(int dividend, int divisor){

    int s =0;
    int e = abs(dividend);
    int ans = 0;

    int mid = s + (e-s)/2;

    while(s <=e){
        //perfet solution
        if (abs(mid *divisor ==abs (dividend))){
            ans =mid;
            break;
        }
    
        
        //Not perfect solution
        if (abs( mid * divisor >  abs (dividend))){
            //left search
            e = mid -1;
        }
        else {
            //ans store 
            ans = mid;
            //right search
            s = mid + 1; 
        }
        mid = s + (e-s)/2;         
    }


    //Negtive number;
    
    if ((divisor<0 && dividend<0 ) || (divisor>0 && dividend>0))
        return ans;
    
    else {
        return -ans;
    }



     int precision;
    cout << "Enter the number of floating digits in precision " << endl;
    cin >> precision;

     double step = 0.1;
     double FinalAns = ans;
    for (int i =0; i<precision; i++){

        for( double j=FinalAns; j*j<=dividend; j=j+ step){
            FinalAns = j;
        }
        step = step /10;

    }
    cout << "Final ans is " << FinalAns << endl;

    
}





int main(){

int dividend = -22;
int divisor = 7;

int ans = solve(dividend, divisor);
cout << "Ans is " << ans << endl;


}
