#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int n,int index)
{
	if(n==0)
		return 0;
	else
	{
		int last_digit=n%10;
		return last_digit*pow(2,index)+binaryToDecimal(n/10,index+1);
	}		
}
int main()
{
	int n;
	cin>>n;
	cout<<binaryToDecimal(n,0);
}

