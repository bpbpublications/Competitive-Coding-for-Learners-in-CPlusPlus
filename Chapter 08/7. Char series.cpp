

		#include<iostream>
		using namespace std;
		int main()
		{
			char x='A',y='Z';
			int i;
			for(i=1;i<=15;i++)
			{
				cout<<x<<y<<" ";
				x=x+2;
				y=y-1;
				if(x>90)
				{
					x=65;
				}
				if(y<65)
				{
					y=90;
				}
			}
		}
		
		
		
		
		
