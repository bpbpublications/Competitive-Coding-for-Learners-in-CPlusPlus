		
		
		#include<iostream>
		#include<math.h>
		using namespace std;
		int main()
		{
			int n;
			cin>>n;
			int a=sqrt(n);
			int f=1,i;
			for(i=2;i<=a;i++)
			{
				if(n%i==0)
				{
					f=0;
					cout<<"Not Prime";
					break;
				}
			}
			if(f==1)
			{
				cout<<"Prime Number";
			}
		}
		
		
		