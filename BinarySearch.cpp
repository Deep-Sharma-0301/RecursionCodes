#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int *a,int s,int e,int key)
{
    if(s>e)
    {
        return false;
    }
    
    int mid=(s+e)/2;
    if(a[mid]==key)
    {
        return true;
    }
    else if(a[mid]>key)
    {
       return binarySearch(a,s,mid-1,key);
    }
    else
    {
        return binarySearch(a,mid+1,e,key);
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<binarySearch(a,0,n-1,k);
    return 0;
}