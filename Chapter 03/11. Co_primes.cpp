#include<iostream>
using namespace std;

int main()
{
	int a,b,hcf=1,i=1;
	cin>>a>>b;
	
	while(a>=i && b>=i)
	{
		if(a%i==0 && b%i==0)
			hcf=i;
		i++;
	}
	if(hcf==1)
		cout<<"Yes";
	else
		cout<<"No";
}





