#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]>='a' &&str[i]<='z')
        str[i]=str[i]-32;
    }
    cout<<str;
    return 0;
}
