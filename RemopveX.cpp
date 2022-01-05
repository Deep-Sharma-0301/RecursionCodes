#include<bits/stdc++.h>
using namespace std;
void RemoveX(char *ch,int i)
{
    if(ch[i]=='\0')
    {
        return ;
    }
    if(ch[i]=='x')
    {
        int j=i+1;
        while(ch[j]!='\0')
        {
            ch[j-1]=ch[j];
            j++;
        }
        ch[j-1]='\0';
        RemoveX(ch,i);
    }
    RemoveX(ch,i+1);
}
int main()
{
    char ch[100];
    cin>>ch;
    RemoveX(ch,0);
    cout<<ch;
    return 0;
}