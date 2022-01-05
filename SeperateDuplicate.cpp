#include<bits/stdc++.h>
using namespace std;
void SeperateDuplicate(char *ch,int i)
{
    if(ch[i]=='\0')
    {
        return ;
    }
    if(ch[i]==ch[i+1])
        {
            int j=i+1;
            while(ch[j]!='\0')
            {
                j++;
            }
            while(j>=i+1)
            {
                ch[j+1]=ch[j];
                j--;
            }
            ch[i+1]='*';
            SeperateDuplicate(ch,i+2);
        }
        SeperateDuplicate(ch,i+1);
}
int main()
{
    char ch[1000];
    cin>>ch;
    SeperateDuplicate(ch,0);
    cout<<ch;
    return 0;
}