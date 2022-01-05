#include<bits/stdc++.h>
using namespace std;
int Last(int *a,int n,int k)
{
    if(n==0)
    {
        return -1;
    }
    int ans=Last(a+1,n-1,k);
    if(ans==-1)
    {
        if(a[0]==k)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    return 1+ans;
}
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<Last(a,n,k);
    return 0;
}