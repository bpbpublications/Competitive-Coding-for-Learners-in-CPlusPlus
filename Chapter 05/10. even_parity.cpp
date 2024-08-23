  #include<iostream>
 using namespace std;

 int main()
 {
	int n;
	cin>>n;
	int myArray[n];
	
    int parity;
	
	for(int i=0;i<n;i++)
	{
		cin>>myArray[i];
	}

	int sum=0;
	for(int i=0;i<n;i++)
	{
	    	
		sum+=myArray[i];
		
	}			
		if(sum%2==0)
		parity=0;
		else
		parity=1;
	
	
	cout<<parity;
}
