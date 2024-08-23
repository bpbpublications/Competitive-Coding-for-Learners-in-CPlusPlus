	
	#include<iostream>
	using namespace std;
	int main()
	{
		int x;
		cin>>x;
		float sum=0,term=1,epsilon=10e-7;
		int i=1;
		while(term>epsilon)
		{
			sum=sum+term;
			term=term*x/i;
			i++;
		}
		cout<<sum;
	}
	
	
	
	
	
	
	