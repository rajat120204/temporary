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
        lli n, m;
        cin>>n>>m;
        vlli vn, vm;
        loop(i,0,n){
            lli x;
            cin>>x;
            vn.pb(x);
        }
        loop(i,0,m){
            lli x;
            cin>>x;
            vm.pb(x);
        }
        loop(i,0,m){
            sort(vn.begin(), vn.end());
            vn[0]=vm[i];
        }
        lli sum=0;
        loop(i,0,n){
            sum+=vn[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}