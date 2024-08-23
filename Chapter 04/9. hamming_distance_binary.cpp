
 #include<iostream>
 using namespace std;

 int main()
 {
	int n;
	cin>>n;
	
	int array1[n], array2[n];
	
 
	for(int i=0;i<n;i++)
	cin>>array1[i];
	
	for(int i=0;i<n;i++)
	cin>>array2[i];
 
	int hamming_distance;
	for(int i=0;i<n;i++)
	{
		if(array1[i]!=array2[i])
		hamming_distance+=1;
	}
	
	cout<<hamming_distance;
}