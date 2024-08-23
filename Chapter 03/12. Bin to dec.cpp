

	#include<iostream>
	#include<math.h>
	using namespace std;
	int main()
	{
		int n;
		cin>>n;
		int dec=0,c=0;
		while(n>0)
		{
			dec=dec+pow(2,c)*(n%10);
			c++;
			n=n/10;
		}
		cout<<dec;
	}
	
	
	