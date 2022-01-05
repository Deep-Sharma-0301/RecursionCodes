//while generatingh subsequences of any string we have two options for every character of the string i.e either we keep that character in our output string or we dont keep it
//is question me recursion call karte timem output array ki copis nahi banengi balki jo bhi updation hogi array me vo har recursion call ke liye hogi kyuki hum array ko pass by reference kar rahe hai lkn ek recursion call ke baad array me ith index pe hum character ko override kardenge


#include<bits/stdc++.h>
using namespace std;
void generate_subsequences(char *inp,char * out,int i,int j)
{
    if(inp[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }
    //now we have two options
    //1) to keep the current character
    out[j]=inp[i];
    generate_subsequences(inp,out,i+1,j+1);
    //2) To not keep the current character
    generate_subsequences(inp,out,i+1,j);
}
int main(){
    char inp[]="abc";
    char out[10];
    generate_subsequences(inp,out,0,0);
    return 0;
}