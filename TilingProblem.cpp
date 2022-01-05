#include<bits/stdc++.h>
using namespace std;
int NumberOfWays(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n>=1 and n<=3)//because no we can only place 4x1 tile
    {
        return 1;
    }
    if(n==4)
    {
        return 2; //now we can either place all thr 4x1 tiles or 1x4 tiles depending on which one we place first
    }
    return NumberOfWays(n-1)+NumberOfWays(n-4);//considering total ways as f(n) if we place first tile of 4x1 then we have f(n-1) ways and if we place 1x4 tile then we have f(n-4) ways so total number of ways will be their sum
}
int main()
{
    int n;
    cin>>n;
    cout<<NumberOfWays(n);
    return 0;
}