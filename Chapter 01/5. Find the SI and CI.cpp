#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float principal, rate, time;
	float si, ci;
	
	cin>>principal>>rate>>time;
	
	si=(principal*rate*time)/100;
	
	ci=principal*(pow((1+(rate/100)),time)-1);
	
	cout<<si<<endl;
	cout<<ci;
}
