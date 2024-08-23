#include<iostream>
#include<math.h>
using namespace std;

int convert_decimal(int bin[],int size)
{
	int decimal=0;
	
	for(int i=0;i<size;i++)
	{
		if(bin[i]==1)
        {
			int power=size-1-i;
			decimal += pow(2,power);
		}		
	}
	return decimal;
}


int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int bin1[n1];
	int bin2[n2];
	
	for(int i=0;i<n1;i++)
	cin>>bin1[i];
	
	for(int i=0;i<n2;i++)
	cin>>bin2[i];
	

	int d1=convert_decimal(bin1,n1);
	int d2=convert_decimal(bin2,n2);
	
	int sub=d1-d2;
	
	cout<<sub;
}
  
   
