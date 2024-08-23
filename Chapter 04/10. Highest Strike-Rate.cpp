#include<iostream>
  using namespace std;
  int main()
  {
	int n;
	cin>>n;
	
	float runs[n];
	float balls[n];
  
  for(int i=0;i<n;i++)
	{
		cin>>runs[i];
	}
	for(int j=0;j<n;j++)
	{
		cin>>balls[j];
	}
  float strike[n];
  for(int i=0;i<n;i++)
  {
  	strike[i]=((float)runs[i]/balls[i])*100;
  }
    float max_val=strike[0];
	for(int i=0;i<n;i++)
	{
		if(strike[i]>max_val)
		    max_val=strike[i];
	}
	cout<<max_val;
}
