//Trailing zeros in a factorial
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,c=0,n;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n;
		for(i=5;n/i>=1;i*=5)
		{
			c+=n/i;
		}
		cout<<c<<endl;
	}
	return 0;
}
