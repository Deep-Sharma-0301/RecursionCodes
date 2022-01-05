#include<bits/stdc++.h>
using namespace std;
int Zeroes(int n)
{
    if(n<=9)//this is not a base case this is a case if user input is 0
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(n%10==0)
    {
        return 1+Zeroes(n/10);
    }
    return Zeroes(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<Zeroes(n);
    return 0;
}