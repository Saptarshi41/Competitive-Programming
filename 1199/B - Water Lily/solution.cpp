#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double h,l;
    cin>>h>>l;
    double x=(l*l-h*h)/(2*h);
    cout<< fixed << setprecision(13)<<x<<endl;
}