#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,temp,int_root,flag=0;
	double float_root;
	cin>>n;
	int sroot=sqrt(n);
	for(int i=1;i<=sroot;i++)
	{
		temp=n-i*i;
		int_root=sqrt(temp);
		float_root=sqrt(temp);
		if((double)int_root==float_root)
		{
			cout<<"yes";
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"no";
}

