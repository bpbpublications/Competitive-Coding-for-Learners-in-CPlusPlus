#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int myArray[n];
  
  for(int i=0;i<n;i++)
  cin>>myArray[i];
  
  int front=0;
  int rear=n-1;
  
  while(front<rear)
  {
	  int temp=myArray[front];
	  myArray[front]=myArray[rear];
	  myArray[rear]=temp;
	  
	  front++;
	  rear--;
  }
  
  for(int i=0;i<n;i++)
  cout<<myArray[i]<<" ";
}
