#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n];
    cin>>str;
	int flag=0;
    int i,j,t;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
		{
			flag=1;
			break;
		}
    }
	if(flag==1)
	cout<<"Not Palindrome";
	else
	cout<<"Palindrome";
    return 0;
}
