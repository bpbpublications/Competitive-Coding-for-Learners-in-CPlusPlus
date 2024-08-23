#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int ch;
	cout<<"Enter 1 for addition"<<endl;
	cout<<"Enter 2 for subtraction"<<endl;
	cout<<"Enter 3 for multiplication"<<endl;
	cout<<"Enter 4 for division"<<endl;
	cout<<"Enter 5 for exponent"<<endl;
	cout<<"Enter 6 for log"<<endl;
	cin>>ch;
	
	int a,b;
	switch(ch)
	{
		case 1:
		cin>>a>>b;
		cout<<a+b;
		break;
		
		case 2:
		cin>>a>>b;
		cout<<a-b;
		break;
		
		case 3:
		cin>>a>>b;
		cout<<a*b;
		break;
		
		case 4:
		cin>>a>>b;
		cout<<a/b;
		break;
		
		case 5:
		cin>>a>>b;
		cout<<pow(a,b);
		break;
		
		case 6:
		cin>>a;
		cout<<log(a);
		break;
		
		default:cout<<"Invalid Choice";
	}
}
