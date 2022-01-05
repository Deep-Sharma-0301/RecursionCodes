#include<bits/stdc++.h>
using namespace std;
int SumOfDigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    int smallans=n%10;
    return smallans+SumOfDigits(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<SumOfDigits(n);
    return 0;
}