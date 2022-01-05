#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int i,int j)
{
    if(i>=j)
    {
        return true;
    }
    if(s[j]!=s[i])
    {
        return false;
    }
    return isPalindrome(s,i+1,j-1);
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    cout<<isPalindrome(s,0,n-1);
    return 0;
}