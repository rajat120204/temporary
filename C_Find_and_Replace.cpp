#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define pi (3.141592653589)
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
 
void solve()
{
    ll n;
    cin>>n;
 
    string s;
    cin>>s;
 
    map<char,int> m1;
    map<char,int> m2;
 
 
    for (int i = 0; i < n; i++)
    {
        if(i%2==0) m1[s[i]]++;
        else m2[s[i]]++;
    }
 
    trav(i,m1)
    {
        if(m2[i.first]){ cout<<"NO"<<endl;
        return;}
    }
    
    cout<<"YES"<<endl;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}