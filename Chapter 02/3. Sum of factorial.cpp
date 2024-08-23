
	#include<iostream>
	using namespace std;
	int main()
	{
		int n;
		cin>>n;
		if(n==0)
		{
			cout<<1;
			return 1;
		}
		int sum=0,f;
		int d,i;
		while(n>0)
		{
			f=1;
			d=n%10;
			for(i=1;i<=d;i++)
			{
				f=f*i;
			}
			sum=sum+f;
			n=n/10;
		}
		cout<<sum;
	}
	
	
	