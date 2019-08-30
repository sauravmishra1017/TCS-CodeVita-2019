#include<iostream>
typedef long long int ull;
using namespace std;

int main()
{
	ull n,w,c1,c2,c5,c10,wm,n1=0,n2=0,n5=0,n10=0;
	cin>>n>>w>>c1>>c2>>c5>>c10;
	wm=w/100;
	while(wm>0)
	{
		if(c1>=wm)
		{
			c1-=wm;
			n1+=wm;
            wm=0;
		}
		else if((c1+c2*2)>=wm)
		{
			wm-=2;
			c2--;
			n2++;
		}
		else if((c1+c2*2+c5*5)>=wm)
		{
			wm-=5;
			c5--;
			n5++;
		}
		else if((c1+c2*2+c5*5+c10*10)>=wm)
		{
			wm-=10;
			c10--;
			n10++;
		}
        else
        {
            cout<<0;
            return 0;
        }
	}
    if((n1+n2+n5+n10)<n)
        cout<<n1+n2+n5+n10;
    else
        cout<<n;
	return 0;
}