#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    cin>>str;
    int i,l=strlen(str);
    int flag=0;
    if(str[i]>='0' && str[i]<='9')
    {
        while(str[i]>='0' && str[i]<='9')
        i++;
        if(str[i]=='.')
        {
            i++;
            if(str[i]>='0' && str[i]<='9')
            {
                while(str[i]>='0' && str[i]<='9')
                i++;
                if(str[i]=='e')
                {
                    i++;
                    if(str[i]=='+' || str[i]=='-')
                    {
                        i++;
                        if(str[i]>='0' && str[i]<='9')
                        {
                            while(str[i]>='0' && str[i]<='9')
                            {
                                if(i==(l-1))
                                {
                                    cout<<"Valid";
                                    flag=1;
                                }
                                i++;
                            }
                        }
                    }
                }
            }
        }
    }
    if(flag==0)
    cout<<"Not Valid";
    return 0;
}
