

		#include<iostream>
		using namespace std;
		int main()
		{
			int x,n;
			cin>>x;
			cin>>n;
			float y;
			y=x*(3.142/180);
			float sum=0,term=y;
			int i=2,c=1;
			int j=0;
			while(j<n)
			{
				if(c%2==1)
				{
					sum=sum+term;
				}
				else
				{
					sum=sum-term;
				}
				term=term*x*x/(i*(i+1));
				i=i+2;
				j=j+1;
			}
			cout<<sum;
		}
		
		