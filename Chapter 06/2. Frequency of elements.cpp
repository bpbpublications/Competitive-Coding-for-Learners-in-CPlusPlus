#include<iostream>
using namespace std;

int find_max(int myArray[], int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(myArray[i]>max) max=myArray[i];
	}
	return max;
}
int main(){
	int n;
	cin>>n;
	int myArray[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>myArray[i];
	}
	
	int lim=find_max(myArray,n);
	int count[lim+1];
	for(int i=0;i<lim+1;i++) count[i]=0;
	for(int i=0;i<n;i++) count[myArray[i]]++;
	for(int i=0;i<lim+1;i++){
		if(count[i]>0){
			cout<<i<<" : "<<count[i]<<endl;
		}
	}
	return 0;
}
