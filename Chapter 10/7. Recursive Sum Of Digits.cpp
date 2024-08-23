#include<iostream>
using namespace std;

int sum_of_digits(int n)
{
	if(n==0)
		return 0;
	else
		return n%10 + sum_of_digits(n/10);
}
int main()
{
	int n;
	cin>>n;
	cout<<sum_of_digits(n);
}

