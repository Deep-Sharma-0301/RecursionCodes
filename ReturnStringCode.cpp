#include<bits/stdc++.h>
using namespace std;
void generate_string(char *ch,char *out,int i,int j)
{
  if(ch[i]=='\0')
  {
    out[j]='\0';
    cout<<out<<endl;
    return ;
  }
  if(ch[i]!='0')
  {
    int dig=ch[i]-'0';
    char character=dig+'A'-1;
    out[j]=character;
    generate_string(ch,out,i+1,j+1);
    if(ch[i+1]!='\0')
  {
    int secondDig=ch[i+1]-'0';
    int number=dig*10+secondDig;
    if(number<=26)
    {
      character=number+'A'-1;
      out[j]=character;
      generate_string(ch,out,i+2,j+1);
    }
  }
  }
  if(ch[i]=='0')
  {
    generate_string(ch,out,i+1,j);
  }

}
int main()
{
  char ch[10];
  cin>>ch;
  char out[10];
  generate_string(ch,out,0,0);
  return 0;
}