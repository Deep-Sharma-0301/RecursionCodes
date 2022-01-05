#include<bits/stdc++.h>
using namespace std;
char digits[][20]={"zero","one","two","three","four","five","six","seven","eight","nine"};  //working as a global variable
void convert2048(int n)
{
    if(n==0)
    {
        return ;
    }
    convert2048(n/10);
    int dig=n%10;
    cout<<digits[dig]<<" ";
}
int main()
{
    int n;
    cin>>n;
    convert2048(n);
    return 0;
}