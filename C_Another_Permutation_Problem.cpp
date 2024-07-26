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
        lli ans=0;
        if(n==2){
            cout<<"2"<<endl;
            continue;
        }
        loopr(i,1,n+1){
            vlli a;
            loop(j,1,i+1){
                a.pb(j);
            }
            loopr(j,i+1,n+1){
                a.pb(j);
            }
            lli sum=0;
            lli maxi=0;
            loop(j,0,n){
                sum+=((j+1)*a[j]);
                maxi=max(maxi,(j+1)*a[j]);
            }
            sum-=maxi;
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}