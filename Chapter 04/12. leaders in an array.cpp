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
	for(int i=0;i<n;i++)
    {
	int j;
	 for(j=i+1;j<n;j++)
	  {
		if(myArray[i]<=myArray[j])
		break;
	  }
	if(j==n)
	cout<<myArray[i];
   }
   }
