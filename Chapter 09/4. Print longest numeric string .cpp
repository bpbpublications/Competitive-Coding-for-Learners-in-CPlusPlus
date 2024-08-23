#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    cin>>str;
    int i,l=strlen(str);
    int start,end,mm=0,mn=-1;
    int count=0,max=0,flag=0;
    for(i=0;i<l;i++)
    {
        flag=0;
        if(str[i]>='0' && str[i]<='9')
        {
            flag=1;
            start=i;
            count=0;
            while(i<l && str[i]>='0' && str[i]<='9')
            {
                count++;
                i++;
            }
            end=i-1;
        }
        if(flag==1)
        {
            if(max<count)
            {
                max=count;
                mm=start;
                mn=end;
            }
            i=i-1;          //to tackle extra increment, as i reached to alphabet at line no.19
        }
    }
    for(i=mm;i<=mn;i++)
    cout<<str[i];
    return 0;
}
