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
        lli n,c;
        cin>>n>>c;
        vlli v;
        loop(i,0,n){
            lli x;
            cin>>x;
            v.pb(x);
        }
        lli sum=0;
        lli sq=0;
        loop(i,0,n){
            sum+=v[i];
            sq+=v[i]*v[i];
        }
        c=(c-sq)/(4*n);
        sum/=2*n;
        cout<<(lli)sqrt(sum*sum+c)-sum<<endl;
    }
    return 0;
}