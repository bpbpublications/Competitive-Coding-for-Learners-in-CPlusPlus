

		#include<iostream>
		using namespace std;
		int main()
		{
			int n;
			cin>>n;
			int d=0,r=0;
			while(n>0)
			{
				d=n%10;
				r=r*10+d;
				n=n/10;
			}
			cout<<r;
		}
		
		
		
		