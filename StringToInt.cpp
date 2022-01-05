#include<bits/stdc++.h>
using namespace std;
int StringToint(string s,int n)
{
    if(n==0)
    {
        return 0;
    }
    int dig=s[n-1]-'0';
    int subans=StringToint(s,n-1);
    return subans*10+dig;
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    cout<<StringToint(s,n);
    return 0;
}