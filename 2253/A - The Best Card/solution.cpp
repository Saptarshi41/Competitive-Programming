#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      int c=0;
      for(int i=1;i<=a+1;i++)
      {
          if((a+1)%i==0)
              c++;
      }
      if(c==2)
          cout<<"YES"<< endl;
      else
          cout<<"NO"<< endl;
          
  }
        
    
    return 0;
}