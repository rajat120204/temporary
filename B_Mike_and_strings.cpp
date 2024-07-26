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
    lli n;
    cin>>n;
    vs v;
    loop(i,0,n){
        string s;
        cin>>s;
        v.pb(s);
    }
    lli moves=INT_MAX;
    lli len=v[0].length();
    loop(i,0,n){
        if(v[i].length()!=len){
            cout<<"-1"<<endl;
            return 0;
        }
    }
    loop(i,0,n){
        lli x=0;
        loop(j,0,n){
            string tmp=v[j];
            lli count=0;
            while(count<len && tmp!=v[i]){
                rotate(tmp.begin(),tmp.begin()+1,tmp.end());
                count++;
            }
            if(count<len){
                x+=count;
            }
            else{
                cout<<"-1"<<endl;
                return 0;
            }
        }
        moves=min(moves,x);
    }
    cout<<moves<<endl;
    return 0;
}