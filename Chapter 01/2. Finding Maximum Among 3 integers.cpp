#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int max_value;
	
	if(a>b)
	{
		if(a>=c)
			max_value=a;
		else
			max_value=c;
	}
	else
	{
		if(b>c)
			max_value=b;
		else
			max_value=c;
	}
	cout<<max_value;
}
