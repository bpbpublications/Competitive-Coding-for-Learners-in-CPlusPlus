
 #include<iostream>
 using namespace std;

   int main()
 {
	int n;
	cin>>n;
	int term;
	int a, diff, sum=0;
	cin>> a >> diff;
	
	for(int i=1;i<=n;i++)
	{	cout << a << " ";
		sum+= a;
		a = a+diff;
	}
	
	cout<<endl<<sum;
}
