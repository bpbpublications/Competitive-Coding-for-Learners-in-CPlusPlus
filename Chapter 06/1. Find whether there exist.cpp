#include<iostream>
using namespace std;
int main(){
	int n,k,flag=0;
	cin>>n>>k;
	
	int myArray[n];
	for(int i=0;i<n;i++) cin>>myArray[i];
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((myArray[i]+myArray[j])==k){
				flag=1;
				break;
			}
		}
		if(flag==1){
			cout<<"Yes";
			break;
		}
	}
	if(flag==0) cout<<"No";
	return 0;
}
