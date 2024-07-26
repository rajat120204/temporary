#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;

int main()
{
 time
    lli a,b;
    cin>>a>>b;
    lli ans=0;
    lli temp=a;
    while(temp/b>0){
        ans+=(temp/b);
        temp=(temp/b)+(temp%b);
    }
    ans=ans+a;
    cout<<ans<<endl;
    return 0;
}