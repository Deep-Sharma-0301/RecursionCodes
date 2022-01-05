#include<bits/stdc++.h>
using namespace std;
bool isSorted(int * a,int n)
{
    if(n==0 or n==1)       //base case
    {
        return true;
    }
    if(a[0]<a[1] and isSorted(a+1,n-1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[1200];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<isSorted(a,n);
    return 0;
}