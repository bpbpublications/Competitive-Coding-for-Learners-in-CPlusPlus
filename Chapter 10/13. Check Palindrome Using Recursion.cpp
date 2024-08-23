#include <iostream>
using namespace std;
int rev(int n,int n1)
{
    if(n==0)
    return n1;
    return rev(n/10,n1*10+n%10);
}

int main()
{
    int n;
    cin>>n;
    int n1=rev(n,0);
    if(n==n1)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}
