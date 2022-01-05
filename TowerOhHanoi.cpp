#include<bits/stdc++.h>
using namespace std;
void TOH(int n, char source,char helper,char destination)
{
    if(n==1)
    {
        cout<<"Transfer "<<n<<" From "<<helper<<" to "<<destination<<endl;
        return ;
    }
    TOH(n-1,source,destination,helper);
    cout<<"Transfer "<<n<<" From "<<source<<" to "<<destination<<endl;
    TOH(n-1,helper,source,destination);
}
int main()
{
    int n;
    cin>>n;
    TOH(n,'a','b','c');
    return 0;
}
