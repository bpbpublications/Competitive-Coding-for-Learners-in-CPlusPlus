 #include<iostream>
  using namespace std;
  int main()
  {
	int n;
	int k;
	cin>>n;
	
	int myArray[n];
	for(int i=0;i<n;i++)
	{
		cin>>myArray[i];
	}
	cin>>k;
	for(int i=k;i<n-1;i++)
	{
		myArray[i]=myArray[i+1];
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<myArray[i];
	}
}
	
