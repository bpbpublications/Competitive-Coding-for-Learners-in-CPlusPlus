#include<iostream>
  using namespace std;
  int main()
  {
	int n;
	cin>>n;
	int myArray[n];
	int myArray2[n];
	
   
	for(int i=0;i<n;i++)
	{
	cin>>myArray[i];
     }
     for(int i=0;i<n;i++)
     {
     	cin>>myArray2[i];
	 }
	  for(int i=0;i<n;i++)
  {
	  if(myArray[i]%2==0&&myArray2[i]%2==0)
	  {
		  myArray[i]=myArray[i]+myArray2[i];
	  }
	  else if(myArray[i]%2==1&&myArray2[i]%2==1)
	  {
		  myArray[i]=myArray[i]*myArray2[i];
	  }		  
  }
  for(int i=0;i<n;i++)
	{
		cout<<myArray[i];
	}
}

