#include<iostream>
using namespace std;
int main()
{
	int n,count=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%2==0)
				cout<<-1*count<<" ";
			else
				cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
}










