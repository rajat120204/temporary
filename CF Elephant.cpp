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
    lli ans;
    if(n%5==0){
        ans=n/5;
    }
    else {
        ans=(n/5)+1;
    }
    cout<<ans;
    return 0;
}