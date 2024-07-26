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
        lli n,k;
        cin>>n>>k;
        lli a[n];
        vector<pair<lli,lli>> v;
        loop(i,0,n){
            cin>>a[i];
            v.pb({a[i],i});
        }
        sort(v.begin(), v.end());
        lli i=0;
        loop(j,0,n){
            if(abs(v[j].second-i)>=k){
                swap(a[v[j].second],a[i]);
                i++;
            }
        }
        loop(i,0,n){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}