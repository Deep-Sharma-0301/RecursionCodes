//in this questions we can have two options of placing the brackets, whether to put a close bracket or to put a open bracket ,iska recursion tree hai notes me vo dekhk kar zyada samjh aega


#include<bits/stdc++.h>
using namespace std;
void generate_brackets(string s,int n,int close,int open)
{
    if(close==n)
    {
        cout<<s<<endl;
        return ;
    }
    if(close<open)
    {
        generate_brackets(s+')',n,close+1,open);
    }
    if(open<n)
    {
        generate_brackets(s+'(',n,close,open+1);
    }
}
int main()
{
    int n;
    cin>>n;
    string s="";
    generate_brackets(s,n,0,0);
    return 0;
}