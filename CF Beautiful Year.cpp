#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli y;
    cin>>y;
    string str;
    while(1){
        y++;
        str=to_string(y);
        if(str[0]!=str[1] && str[0]!=str[2] && str[0]!=str[3] && str[1]!=str[2] && str[1]!=str[3] && str[2]!=str[3]){
            break;
        }
    }
    cout<<str<<endl;
    return 0;
}