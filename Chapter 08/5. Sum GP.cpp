		
		
		#include<iostream>
		using namespace std;
		int main()
		{
			int n;
			cin>>n;
			int a=2,r=2,sum=0;
			int i;
			for(i=1;i<=n;i++)
			{
				sum=sum+a;
				a=a*r;
			}
			cout<<sum;
		}
		
		
		
		
		