#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sroot=sqrt(n);
	for(int i=1;i<=sroot;i++)
	{
		if(n%i==0)
			cout<<"("<<i<<","<<n/i<<")"<<endl;
	}
}