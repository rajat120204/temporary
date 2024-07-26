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
        lli n,l,r;
        cin>>n>>l>>r;
        vlli v;
        loop(i,0,n){
            lli x;
            cin>>x;
            v.pb(x); 
        }      
        lli j=0;  
        lli ans=0;

        loop(i,0,n){
            lli sum=v[i];
            while(sum>r && j<=i){
                sum-=v[j];
                j++;
            }
            if(sum>=l && sum<=r){
                ans++;
                sum=0;
                j=i+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}