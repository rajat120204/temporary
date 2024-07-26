#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    string s;
    cin>>s;
    loop(i, 0, s.length()){
        if(s[0]>=97){
            s[0]-=32;
        }
    }
    cout<<s<<endl;
    return 0;
}