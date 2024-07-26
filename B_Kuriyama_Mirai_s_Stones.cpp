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
    lli n;
    cin>>n;
    vlli a, b;
    loop(i,0,n){
        lli x;
        cin>>x;
        a.pb(x);
        b.pb(x);
    }
    sort(b.begin(),b.end());
    vlli suma,sumb;
    suma.pb(a[0]);
    sumb.pb(b[0]);
    loop(i,1,n){
        suma.pb(suma[i-1]+a[i]);
        sumb.pb(sumb[i-1]+b[i]);
    }
    lli m;
    cin>>m;
    loop(i,0,m){
        lli t,l,r;
        cin>>t>>l>>r;
        lli ans=0;
        if(t==1){
            ans+=(suma[r-1]-suma[l-1]+a[l-1]);
        }
        else{
            ans+=(sumb[r-1]-sumb[l-1]+b[l-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}