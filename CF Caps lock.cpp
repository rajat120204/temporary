#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    string str;
    cin>>str;
    bool check=true;

    loop(i,1,str.length())
    {
        if(str[i]>='a' && str[i]<='z') 
        {
            check=false;
            break;
        }
    }

    if(check) 
    {
        loop(i,1,str.length())
        {
            str[i] = tolower(str[i]);
        }
        if(str[0]>='a')
        {
            str[0] = toupper(str[0]);
        }else
        {
            str[0] = tolower(str[0]);
        }
    }
    cout<<str;
    return 0;
}