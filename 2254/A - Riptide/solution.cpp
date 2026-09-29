#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b || b==c || c==a)
            cout<<0<<endl;
        else{
            int max,mid,min;
            if(a>b && a>c)
                max=a;
            else if(b>c && b>a)
                max=b;
            else
                max=c;
            if((a<b && a>c) || (a<c && a>b))
                mid=a;
            else if((b>c && b<a) || (b>a && b<c))
                mid=b;
            else
                mid=c; 
           if(a<b && a<c)
                min=a;
            else if(b<c && b<a)
                min=b;
            else
                min=c;
            if(mid-min>max-mid)
                cout<<max-mid<<endl;
            else
               cout<<mid-min<<endl; 
            
        }
    }
    return 0;
}