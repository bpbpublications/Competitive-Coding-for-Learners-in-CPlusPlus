#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int magic[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>magic[i][j];
		}
	}	
	int flag=0;
	int sum_constant=0,sum=0;

	int t=n*n+1;
	int hash[t]={0};
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			hash[magic[i][j]]=1;
		}
	}
	
	for(int i=1;i<t;i++)
	{
       if(hash[i]==0)
	   {
		   flag=1;
		   break;
	   }	   
	}
	
	if(flag==1)
	{
		cout<<"not magic matrix";
	}
	
	else
	{
		for(int i=0;i<n;i++)
		sum_constant += magic[0][i];
		
		for(int i=1;i<n;i++)
		{
			sum=0;
			for(int j=0;j<n;j++)
			{
				sum+=magic[i][j];
			}
			if(sum!=sum_constant)
			{
				flag=1;
				break;
			}
		}
		
		for(int i=1;i<n;i++)
		{
			sum=0;
			for(int j=0;j<n;j++)
			{
				sum+=magic[j][i];
			}
			if(sum!=sum_constant)
			{
				flag=1;
				break;
			}
		}
		
		sum=0;
		
		for(int i=0;i<n;i++)
		sum+=magic[i][i];
		
		if(sum!=sum_constant)
		flag=1;
		
		int j=n-1;
		sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=magic[i][j];
			j--;
		}
		
		if(sum!=sum_constant)
		
		flag=1;
		
		if(flag==1)
	    cout<<"Not magic matrix";
	
     	else
	     cout<<"Magic matrix";
	}
	

}
