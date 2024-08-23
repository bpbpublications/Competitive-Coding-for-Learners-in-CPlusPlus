#include<iostream>
using namespace std;
int main(){
	int n, i, j;
	cin>>n;
	int myArray[n];
	for(i=0;i<n;i++)
	{
		cin>>myArray[i];
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(myArray[i]==myArray[j])
				break;
		}
		if(i==j) cout<<myArray[i]<<endl;
	}
	return 0;
}
