#include<bits/stdc++.h>
using namespace std;
void Increase(int n)
{
    if(n==0) //base case
    {
        return ;
    }
    Increase(n-1);
    cout<<n<<" ";
}
void Decrease(int n)
{
    if(n==0)    // base case
    {
        return ;
    }
    cout<<n<<" ";
    Decrease(n-1);
}
int main()
{
    int n;
    cin>>n;
    Increase(n);
    cout<<endl;
    Decrease(n);
    return 0;
}