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
  
  int output[n];
  int k=0;
  for(int i=0;i<n;i++)
  {
	if(myArray[i]<0)
	{
		output[k]=myArray[i];
		k++;
	}
  }
  
  for(int i=0;i<n;i++)
  {
	if(myArray[i]>=0)
	{
		output[k]=myArray[i];
		k++;
	}
  }
  
   for(int i=0;i<n;i++)
  {
	  cout<<output[i];
  }
}
