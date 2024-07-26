#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n;
    cin>>n;
    lli a, b[1000];
    for(lli i=1; i<=n; i++){
        cin>>a;
        b[a]=i;
    }
    for(lli i=1; i<=n; i++){
        cout<<b[i]<<" ";
    }
    return 0;
}