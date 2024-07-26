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
    test{
        lli n;
        cin>>n;
        lli a[n];
        vector<pair<lli,lli>> v;
        loop(i,0,n){
            cin>>a[i];
            v.push_back({a[i],i+1});
        }
        sort(v.begin(),v.end());
        lli ans=0;
        loop(i,0,n){
            loop(j,0,i){
                if(v[i].first*v[j].first>n*2){
                    break;
                }
                if(v[i].first*v[j].first==v[i].second+v[j].second){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}