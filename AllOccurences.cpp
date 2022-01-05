#include<bits/stdc++.h>
using namespace std;
void all(int *a,int n,int k,int i)
{
    if(i==n)
    {
        return ;
    }
    if(a[i]==k)
    {
        cout<<i<<" ";
    }
    all(a,n,k,i+1);
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
    all(a,n,k,0);
    return 0;
}