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
	int max_val=myArray[0];
	for(int i=0;i<n;i++)
	{
		if(myArray[i]>max_val)
		max_val=myArray[i];
	}
	cout<<max_val;
}
