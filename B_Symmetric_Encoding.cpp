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
        string s;
        cin>>s;
        map<char,lli> m;
        loop(i,0,n){
            m[s[i]]++;
        }
        vector<char> unique;
        trav(it,m){
            unique.pb(it.first);
        }
        map<char,int> m1;
        loop(i,0,unique.size()){
            m1[unique[i]]=i;
        }
        loop(i,0,n){
            cout<<unique[unique.size()-m1[s[i]]-1];
        }
        cout<<endl;
    }
    return 0;
}