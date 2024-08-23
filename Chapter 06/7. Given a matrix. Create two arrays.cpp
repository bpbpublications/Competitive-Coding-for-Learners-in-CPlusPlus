#include<iostream>
using namespace std;
int main(){
	int m,n,size,k=0,l=0;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	size=m*n;
	int odd[size],even[size];
	for(int i=0;i<size;i++){
		odd[i]=-1;
		even[i]=-1;
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]%2==0) even[k++]=a[i][j];
			else odd[l++]=a[i][j]; 
		}
	}
	for(int i=0;even[i]!=-1;i++) cout<<even[i]<<" ";
	cout<<endl;
	for(int i=0;odd[i]!=-1;i++) cout<<odd[i]<<" ";
	return 0;
}
