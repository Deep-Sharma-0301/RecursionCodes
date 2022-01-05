#include<bits/stdc++.h>
using namespace std;

char ch[][10]={" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
char searchIN[][20] = {"kartik", "sneha", "deepak", "arnav", "shikha", "palak","utkarsh", "divyam", "vidhi", "sparsh", "akku"};

void smart_keypad(char *inp,char *out,int i,int j)
{
    if(inp[i]=='\0')
    {
        out[j]='\0';
        string a(out);
        for(string ss:searchIN)
        {
            if(ss.find(a)!=string::npos)//npos means last nth index of string, agar nahi milta toh npos ke equal hota
            {
                cout<<ss<<endl;
            }
        }
        return ;
    }
    int dig=inp[i]-'0';
    for(int k=0;ch[dig][k]!='\0';k++)
    {
        out[j]=ch[dig][k];
        smart_keypad(inp,out,i+1,j+1);
    }
}

int main()
{
    char inp[10];
    cin>>inp;
    char out[100];
    smart_keypad(inp,out,0,0);
    return 0;
}
