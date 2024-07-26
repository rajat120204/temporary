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
        lli n;
        cin>>n;
        vlli v1;
        loop(i,0,n){
            lli x;
            cin>>x;
            v1.pb(x);
        }
        sort(v1.begin(),v1.end());
        lli i=v1[n-1];
        lli j=v1[0];
        lli k=v1[n-2];
        lli l=v1[1];
        cout<<abs(i-j)+abs(j-k)+abs(k-l)+abs(i-l)<<endl;


    }
    return 0;
}