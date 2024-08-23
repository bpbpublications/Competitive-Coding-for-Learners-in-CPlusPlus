#include<iostream>
using namespace std;

int main()
{
	int n,count=0;
	cin>>n;

	for (int i=1;i<=n;i++)
	{
		count=count+i;
		for(int j=0;j<i;j++)
		{
			cout<<count-j<<" ";
		}
		cout<<endl;
	}
}
