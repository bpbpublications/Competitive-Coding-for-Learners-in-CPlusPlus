#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    cin>>str;
	int count[256]={0};
    int i,l=strlen(str);
    for(i=0;i<l;i++)
    {
        count[str[i]]++;
    }
    int max=0,max_i=-1;
    for(i=0;i<256;i++)
    {
        if(max<count[i])
        {
            max=count[i];
            max_i=i;
        }
    }
    cout<<(char)max_i;
    return 0;
}
