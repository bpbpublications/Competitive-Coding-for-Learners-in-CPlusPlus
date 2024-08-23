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
  	  int j;
  	   for(j=0;j<n;j++)
  	    {
  		  if(myArray[i]==myArray2[j])
  		  break;
	    }
	  if(j==n)
	  cout<<myArray[i];
     }
   }
