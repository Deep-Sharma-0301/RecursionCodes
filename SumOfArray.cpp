#include<bits/stdc++.h>
using namespace std;
int SumofArray(int *a,int n)
{
    if(n==0)
    {
        return 0;
    }
    int smallans=a[0];
    return smallans+SumofArray(a+1,n-1);
}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<SumofArray(a,n);
    return 0;
}