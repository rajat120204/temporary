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
        vlli v;
        loop(i,0,n){
            lli x;
            cin>>x;
            v.pb(x);
        }
        lli sub=0, check=1;
        vlli curr;
        loopr(i,0,n){
            lli freq=v[i]-sub;
            if(curr.size()+freq>n){
                check=0;
                break;
            }
            while(freq--){
                curr.pb(i+1);
            }
            sub=v[i];
        }
        if(curr.size()==n){
           loop(i,0,n){
            check&=(v[i]==curr[i]);
            }
        }
        else{
            check=0;
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}