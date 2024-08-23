#include<iostream>
using namespace std;
int main()
{
	int n,temp=2,flag=0,k=0,count = 0;
	cin>>n;
	while(n>0)
	{	flag=0;
		if(n%temp==0)
		{
			count++;	
		}
		else
		{	flag=1;
			if(count!=0)
			cout<<temp<<"^"<<count<<" ";
			count=0;
			temp++;
			if(n==1)
				break;
		}
		if(flag==0)
			n=n/temp;
	}
}
