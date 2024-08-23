#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    int i,j,t;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
    }
    cout<<str;
    return 0;
}
