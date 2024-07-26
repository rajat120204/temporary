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
    test{
        lli n,c;
        cin>>n>>c;
        lli a;
        map<lli,lli> m;
        loop(i,0,n){
            cin>>a;
            m[a]++;
        }
        lli ans=0;
        for(auto &i:m){
            ans+=min(i.second,c);
        }
        cout<<ans<<endl;
    }
    return 0;
}