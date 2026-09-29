#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        vector <int> v;
        vector <int> c;
        for(int j=0;j<a;j++)
        {   int x;
              cin>>x;
            v.push_back(x);
        }
 
        sort(v.begin(),v.end());
        for(int k=0;k<a;k++)
        {
            if(k==0|| v[k]!=v[k-1])
            {
                
            c.push_back(v[k]);
            }
        }
        int f=0;
        for(int l=0;l<c.size();l++)
        {
            int p=0;
            
            for(int m=0;m<a;m++)
            {
                if(c[l]==v[m])
                    ++p;;
            }
            if(c[l]<=p)
                f+=(p-c[l]);
            else
                f+=p;
            
        }
        cout<<f<<"
";
        
    }
}