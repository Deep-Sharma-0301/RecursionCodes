#include<bits/stdc++.h>
using namespace std;
bool LinearSearch(int *a,int n,int k)
{
    if(n==0)
    {
        return false;
    }
    if(a[0]==k)
    {
        return true;
    }
    return LinearSearch(a+1,n-1,k);
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
    int k;
    cin>>k;
    cout<<LinearSearch(a,n,k);
    return 0;
}