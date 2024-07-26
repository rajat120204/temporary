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
#define sc set<char>
#define ss set<string>
using namespace std;

int main()
{
 time
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    lli n;
    cin>>n;
    vlli v;
    loop(i,0,2*n){
        lli x;
        cin>>x;
        v.pb(x);
    }
    mll m;
    loop(i,0,2*n){
        m[v[i]]++;
    }
    trav(it,m){
        if(it.second%2!=0){
            cout<<"-1";
            return 0;
        }
    }
    vector<pair<lli,lli>> vp;
    loop(i,0,2*n){
        vp.pb({v[i], i+1});
    }
    sort(vp.begin(), vp.end());
    for(lli i=0; i<2*n; i+=2){
        cout<<vp[i].second<<" "<<vp[i+1].second<<endl;
    }
    return 0;
}