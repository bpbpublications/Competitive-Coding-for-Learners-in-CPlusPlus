#include<iostream>
#include<cmath>
using namespace std;
int count_digits(int n)
{
	int s=0;
	while(n>0)
	{
		s++;
		n=n/10;
	}
	return s;
}
int power(int n)
{
	int s=1;
	while(n>1)
	{
		s=s*10;
		n--;
	}
}

int reverse(int n)
{
	int num_of_digits=count_digits(n);
	int power_of_10=power(num_of_digits);
	if(n==0)
		return 0;
	else
		return (n%10)*(power_of_10) + reverse(n/10);
}

int main()
{
	int n;
	cin>>n;
	cout<<reverse(n);
}

