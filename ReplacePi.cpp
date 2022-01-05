#include<bits/stdc++.h>
using namespace std;
void ReplacePi(char *ch,int i)
{
    if(ch[i]=='\0')
    {
        return ;
    }
    if(ch[i]=='p' and ch[i+1]=='i')
    {
        int j=i+2;
        while(ch[j]!='\0')
        {
            j++;
        }
        while(j>=i+2)
        {
            ch[j+2]=ch[j];
            j--;
        }
        ch[i]='3';
        ch[i+1]='.';
        ch[i+2]='1';
        ch[i+3]='4';
        ReplacePi(ch,i+4);
    }
    ReplacePi(ch,i+1);
}
int main()
{
    char a[100];
    cin>>a;
    ReplacePi(a,0);
    cout<<a;
    return 0;
}