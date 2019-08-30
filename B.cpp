#include<bits/stdc++.h>
typedef long long int ull;
using namespace std;

ull fact(ull bn)
{
	if(bn>1)
        return bn*fact(bn-1);
    else
        return 1;
}

int main()
{
	ull bn,ans,temp;
	cin>>bn;
    if(bn<1)
        cout<<0;
    if(bn==2)
        cout<<1;
    else
    {
        temp=fact(bn-1);
        ans=(temp/2)*(bn-1);
        cout<<ans;
    }
  	cout<<endl;
	return 0;
}