#include<iostream>
using namespace std;
int main(){
	int m1,n1;
	cin>>m1>>n1;
	int m2,n2;
	cin>>m2>>n2;
	int a[m1][n1],b[m2][n2];
	for(int i=0;i<m1;i++){
		for(int j=0;j<n1;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m1;i++){
		for(int j=0;j<n1;j++){
			cin>>b[i][j];
		}
	}
	if(n1==m2){
		int c[m1][n2], sum=0;
		for(int i=0;i<m1;i++){
			for(int j=0;j<n2;j++){
				sum=0;
				for( int k=0;k<m1;k++){
					sum+=a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}
		for(int i=0;i<m1;i++){
			for(int j=0;j<n2;j++){
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
