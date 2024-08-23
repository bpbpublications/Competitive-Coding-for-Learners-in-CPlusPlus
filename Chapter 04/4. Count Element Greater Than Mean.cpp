	
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
	int sum=0;
	float mean;
	for(int i=0;i<n;i++)
	{
		sum=sum+myArray[i];
		
	}
	mean=(float)sum/n;
	
	
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(myArray[i]>mean)
		count++;
	}
	cout<<count;
}
