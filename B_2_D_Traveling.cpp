#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define trav(a,x) for (auto& a : x)
#define pb push_back
#define eb emplace_back
#define vlli vector<lli>
#define vc vector<char>
#define vs vector<string>
#define mll map<lli,lli>
#define mcc map<char,char>
#define mss map<string,string>
#define mls map<lli,string>
#define msl map<string,lli>
#define slli set<lli>
#define vcp vector<pair<lli,lli>>
#define sc set<char>
#define ss set<string>
using namespace std;

int main()
{
 time
    test{
        lli n, k, a, b;
        cin>>n>>k>>a>>b;
        vlli v1, v2;
        loop(i,0,n){
            lli x,y;
            cin>>x>>y;
            v1.pb(x);
            v2.pb(y);
        }
        lli ans=abs(v1[a-1]-v1[b-1])+abs(v2[a-1]-v2[b-1]);
        //cout<<ans<<endl;
        lli major1=1e18;
        lli major2=1e18;
        loop(i,0,k){
            major1=min(major1, abs(v1[i]-v1[a-1])+abs(v2[i]-v2[a-1]));
            major2=min(major2, abs(v1[i]-v1[b-1])+abs(v2[i]-v2[b-1]));
        }
        ans=min(ans,major1+major2);
        cout<<ans<<endl;
    }
    return 0;
}