#include <iostream>
using namespace std;
void rev(int a[],int i,int j)
{
    int t;
    if(i<=j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        rev(a,i+1,j-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rev(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
