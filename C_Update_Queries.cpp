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
#define mcl map<char,lli>
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
        lli n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vlli v;
        loop(i,0,m){
            lli x;
            cin>>x;
            v.pb(x);
        }
        string c;
        cin>>c;
        slli st;
        loop(i,0,m){
            st.insert(v[i]);
        }
        sort(c.begin(),c.end());
        lli index=0;
        trav(it,st){
            s[it-1]=c[index];
            index++;
        }
        cout<<s<<endl;
    }
    return 0;
}