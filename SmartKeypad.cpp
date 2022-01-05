#include<bits/stdc++.h>
using namespace std;
char ch[][10]={"",".+@$","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void generate_keypad(char *inp,char *out,int i,int j)
{
    if(inp[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }
    int dig=inp[i]-'0';
    for(int k=0;ch[dig][k]!='\0';k++)
    {
        out[j]=ch[dig][k];
        generate_keypad(inp,out,i+1,j+1);
    }
}
int main()
{
    char inp[100];
    cin>>inp;
    char out[100];
    generate_keypad(inp,out,0,0);
    return 0;
}