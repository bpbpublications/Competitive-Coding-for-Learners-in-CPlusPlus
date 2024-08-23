#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int count=0,max_count=0, index=0;
	for(int i=0;i<n;i++){
		count=0;
		for(int j=0;j<n;j++){
			if(a[j][i]==1) count++;
		}
		if(count>max_count){
			max_count=count;
			index=i;
		}
	}
	cout<<(index+1);
	return 0;
}
