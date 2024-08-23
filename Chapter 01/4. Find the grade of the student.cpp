#include<iostream>
using namespace std;
int main()
{
	int marks;
	cin>>marks;
	
	if(marks>=90)
		cout<<"A+";
	else if(marks>=80)
		cout<<"A";
	else if(marks>=70)
		cout<<"B";
	else if(marks>=60)
		cout<<"C";
	else if(marks>=50)
		cout<<"D";
	else
		cout<<"F";
}
