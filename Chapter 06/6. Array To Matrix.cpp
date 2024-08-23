#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	
	int a=0,b=0;
	for(int i=2;i<n;i++){
		if (n%i==0) {
			 a = i; 
			 b = n/i;
			 break;
		}
	}
	
	int m[a][b],k=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			m[i][j]=ar[k++];
		}
	}
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
