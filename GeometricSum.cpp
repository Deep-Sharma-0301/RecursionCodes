#include<bits/stdc++.h>
using namespace std;
float GeometricSum(int k)
{
    if(k==0)
    {
        return 1;
    }
    float smallAns=(1/pow(2,k));
    return smallAns+GeometricSum(k-1);
}
int main()
{
    int k;
    cin>>k;
    cout<<GeometricSum(k);
    return 0;
}