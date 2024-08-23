


	#include<iostream>
	using namespace std;
	int main()
	{
		int max=INT_MIN,smax=INT_MIN;
		int k;
		cin>>k;
		while(k>0)
		{
			if(k>max)
			{
				smax=max;
				max=k;
			}
			if(k>smax && k<max)
			{
				smax=k;
			}
		}
		if(smax==INT_MIN)
		{
			cout<<"NO SECOND MAXIMUM";
		}
		else
		{
			cout<<smax;
		}
	}
	
	
	