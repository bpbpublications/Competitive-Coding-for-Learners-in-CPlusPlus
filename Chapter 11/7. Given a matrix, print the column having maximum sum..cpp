#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int sum=0, max_sum=0,col=0;
	for(int i=0;i<m;i++){
		sum=0;
		for(int j=0;j<n;j++){
			sum+=a[j][i];
		}
		if(sum>max_sum){
			max_sum=sum;
			col=i;	
		}
	}
	cout<<(col+1);
	return 0;
}
