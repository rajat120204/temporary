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
    vlli v1;
    loop(i,0,n){
        lli x;
        cin>>x;
        v1.pb(x);
    }
    vlli v2;
    v2.pb(v1[0]);
    loop(i,1,n){
        lli r=v1[i], l=v1[i-1];
        if(r>l){
            loop(j,l+1,r+1){
            v2.pb(j);
            }
        }
        else{
            loopr(j,r,l){
            v2.pb(j);
            }
        }
        
    }
    loop(i,0,v2.size()){
        cout<<v2[i]<<" ";
    }
    return 0;
}