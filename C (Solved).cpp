#include<bits/stdc++.h>
typedef long long int ull;
using namespace std;

int main()
{
	ull n,c5=1,c2=2,c1=1,temp;
	cin>>n;
    temp=n;
	if(n==1)
		cout<<"1 0 0 1";
	else if(n==2)
		cout<<"2 0 0 2";
	else if(n==3)
		cout<<"2 0 1 1";
	else if(n==4)
		cout<<"3 0 1 2";
	else if(n==5)
		cout<<"3 0 2 1";
	else if(n==6)
		cout<<"4 0 2 2";
	else if(n==7)
		cout<<"4 0 3 1";
	else if(n==8)
		cout<<"5 0 3 2";
	else if(n==9)
		cout<<"4 1 1 2";
	else if(n==10)
		cout<<"4 1 2 1";
	else
	{
		n=n-10;
		while(n>0)
		{
			if(n>=5)
			{
				n-=5;
				c5++;
			}
			else if(n>=2)
			{
				n-=2;
				c2++;
			}
			else if(n>=1)
			{
				n-=1;
				c1++;
			}
		}
        if(temp%10==4 || temp%10==9)
        {
            c5++;
            c2=1;
            c1=2;
        }
        printf("%llu %llu %llu %llu\n",c1+c2+c5,c5,c2,c1);
	}
	return 0;
}