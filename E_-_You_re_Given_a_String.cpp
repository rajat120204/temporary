#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
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
    string s;
    cin>>s;
    msl m;
    lli n=s.length();
    loop(i,0,n){
        string s1="";
        loop(j,i,n){
            s1.pb(s[j]);
            m[s1]++;
        }
    }
    lli ans=0;
    loop(i,0,n){
        string s1="";
        loop(j,i,n){
            s1.pb(s[j]);
            if(m[s1]>=2){
                ans=max(ans,(lli)s1.length());
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}