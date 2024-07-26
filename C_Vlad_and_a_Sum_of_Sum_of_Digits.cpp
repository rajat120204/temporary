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
lli sum_of_digits(lli n){
    lli ans=0;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
int main()
{
 time
    lli limit=(2*1e5);
    vlli v;
    lli term=0;
    loop(i,1,limit+1){
        term+=sum_of_digits(i);
        v.pb(term);
    }
    test{
        lli n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }
    return 0;
}