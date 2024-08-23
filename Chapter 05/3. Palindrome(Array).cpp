  
  #include<iostream>
  using namespace std;
  
  int main()
 {
    int n;
    cin>>n;
    int myArray[n];
	
	for(int i=0;i<n;i++)
	cin>>myArray[i];
 
    int front,rear,flag;
	front=0;
	rear=n-1;
	flag=1;
	
	while(front<rear)
	{
		if(myArray[front]!=myArray[rear])
		{
			flag=0;
			break;
		}
		front=front+1;
		rear=rear-1;
	}
	
	if(flag==1)
	cout<<"palindrome";
	else
	cout<<"not palindrome";
	
 
 }
 
 
 
 
 
 
