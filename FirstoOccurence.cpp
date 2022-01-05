#include<bits/stdc++.h>
using namespace std;
int First(int *a,int n,int k)
{
    if(n==0)//this means that the key is not present in array
    {
        return -1;
    }
    if(a[0]==k)
    {
      return 0;
    }
    int ans=First(a+1,n-1,k);
    if(ans!=-1)             //this means that the key is present in array and have been founded
    {
        return ans+1;
    }
    else         //this means that key is not founded 
    {
        return -1;
    }
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
    cout<<First(a,n,k);
    return 0;
}