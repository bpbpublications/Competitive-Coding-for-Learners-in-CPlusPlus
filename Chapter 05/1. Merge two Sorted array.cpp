#include<iostream>
  using namespace std;
  int main()
  {
	int n;
	cin>>n;
	int myArray[n];
	int myArray2[n];
	int a[2*n];
   
	for(int i=0;i<n;i++)
	{
	cin>>myArray[i];
     }
     for(int i=0;i<n;i++)
     {
     	cin>>myArray2[i];
	 }
  
  int k=0,j=0,i=0;
  while(i<n&&j<n)
  {
  	if(myArray[i]<=myArray2[j])
  	{
  		a[k]=myArray[i];
		  k++;
		  i++;
	}	  
	else
	{
		a[k]=myArray2[j];
		k++;
		j++;
	}
  }
 
 
 
 
   while(i<n)
   {
   	a[k]=myArray[i];
		  k++;
		  i++;
   }
   while(j<n)
   {
   a[k]=myArray2[j];
		k++;
		j++;
   }
  	for(int i=0;i<2*n;i++)
  	{
  		cout<<a[i]<<endl;
  	}
  }
