#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     int n,p,k;
     cin>>n>>p>>k;
     int count=0;
 
     int m=p%k;
     m--;
 
      int a=((n-1)/k)*k;
      a = n-1 - a;
 
      if(m > a)
      {
         count += (a+1)*((n-1)/k +1) + (m-a)*((n-1)/k);
      }
      else
      {
         count += ((n-1)/k +1)*(m+1);
      }
 
      for (int i = m+1; i <= n-1 ; i += k)
      {
         count++;
         if(i==p)
         {
            cout<<count<<"\n";
            break;
         }
      }
      
  }
  return 0;
}
