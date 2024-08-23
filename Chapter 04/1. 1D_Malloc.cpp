#include<iostream>
#include<stdlib.h>
using namespace std;

int *getArray()	//callee
{
	int *arr=(int*)malloc(3*sizeof(int));	//correct way
	//int arr[3];	//Faulty way
	arr[0]=1;
	arr[1]=2;
	arr[2]=3;
	return arr;
}
int main()	//caller
{
	//callee to caller
	int *ar=getArray();
	cout<<ar[0];
	cout<<ar[1];
	cout<<ar[2];
}
