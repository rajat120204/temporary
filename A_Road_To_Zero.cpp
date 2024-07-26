#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define pb push_back
#define eb emplace_back
using namespace std;

int main()
{
 time
    test{
        lli x,y;
        cin>>x>>y;
        lli a,b;
        cin>>a>>b;
        lli ans=0;
        if(x==0 && y==0){
            ans=0;
        }
        else if(x==0 || y==0){
            ans = a*max(x,y);
        }
        else{
            lli maxi=max(x,y);
            lli mini=min(x,y);
            lli a1=(maxi-mini)*a;
            lli a2=min(2*a*mini, mini*b);
            ans=a1+a2;
        }
        cout<<ans<<endl;
    }
    return 0;
}