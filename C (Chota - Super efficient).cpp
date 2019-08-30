#include <iostream>
using namespace std;
int main()
{
    long int n,c1,c2,c5;
    cin>>n;
    c5=(n-4)/5;
    c2=((n-c5*5)-1)/2;
    c1=n-c5*5-c2*2;
    cout<<c1+c2+c5<<" "<<c5<<" "<<c2<<" "<<c1;
}