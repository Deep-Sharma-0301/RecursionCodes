#include<bits/stdc++.h>
using namespace std;
int Digits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+Digits(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<Digits(n);
    return 0;
}