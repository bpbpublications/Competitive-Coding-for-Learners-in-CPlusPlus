	
	#include<iostream>
	using namespace std;
	int main()
	{
		int k;
		cin>>k;
		int x=2,y=10,sum=0;
		int i;
		for(i=1;i<=k;i++)
		{
			sum=sum+x+y;
			cout<<x<<" "<<y<<" ";
			x=x*3;
			y=y*2;
		}
		cout<<sum;
	}
	
	
	