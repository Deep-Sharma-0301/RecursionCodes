#include<bits/stdc++.h>
using namespace std;
int Length(char *ch,int i)
{
    if(ch[i]=='\0')
    {
        return 0;
    }
    return 1+Length(ch,i+1);
}
int main()
{
    char ch[100];
    cin.getline(ch,100);
    cout<<Length(ch,0);
    return 0;
}