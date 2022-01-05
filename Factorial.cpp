#include<bits/stdc++.h>
using namespace std;
int Fact(int n)
{
    if(n==0 or n==1)
    {
        return 1;
    }
    int smallans=Fact(n-1);
    return n*smallans;
}
int main()
{
    int n;
    cin>>n;
    cout<<Fact(n);
    return 0;
}