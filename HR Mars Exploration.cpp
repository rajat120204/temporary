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
    lli count=0;
    loop(i,0,s.length()){
        if(s[i]=='S' || s[i]=='O'){
            count++;
        }
    }
    cout<<(s.length()-count)<<endl;
    return 0;
}