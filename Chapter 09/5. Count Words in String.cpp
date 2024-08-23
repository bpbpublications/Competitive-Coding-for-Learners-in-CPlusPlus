#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str,100);
    int l=strlen(str);
    int count=0;
    for(int i=0;i<=l;i++)
    {
        if(str[i]==' ' || i==l-1)
        count++;
    }
    cout<<count;
    return 0;
}