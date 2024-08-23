#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int binary[1000],count=0;
	int k=0;
	while(n>0)
	{
		binary[k++]=n%2;
		n=n/2;
		count++;
	}
	
	for(int i=count-1;i>=0;i--)
	{
		cout<<binary[i];
	}
}


