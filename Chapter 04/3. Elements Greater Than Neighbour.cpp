 #include<iostream>
  using namespace std;
  int main()
  {
	int n;
	cin>>n;
	
	int myArray[n];
	for(int i=0;i<n;i++)
	{
		cin>>myArray[i];
	}
	
	if(myArray[0]>myArray[1])
	{
		cout<<myArray[0];
	}
	if(myArray[n-1]>myArray[n-2])
	{
		cout<<myArray[n-1];
	}
	for(int i=1;i<n-1;i++)
	{
		if(myArray[i]>myArray[i-1]&&myArray[i]>myArray[i+1])
		{
			cout<<myArray[i];
		}
	}
}
