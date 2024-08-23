#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int max_value;
	
	if(a>=b && a>=c)
	{
		if(b>=c)
			max_value=b;
		else
			max_value=c;
	}
	else if(b>=a && b>=c)
	{
		if(a>=c)
			max_value=a;
		else
			max_value=c;
		
	}
	else if(a>=b)
	max_value=a;
	else
	max_value=b;
	cout<<max_value;
}
