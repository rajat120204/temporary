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
        string s1, s2;
        cin>>s1>>s2;
        string ans="";
        bool check=true;
        lli count=1;
        ans.pb(s1[0]);
        loop(i,0,n-1){
            if(s1[i+1]=='0' && s2[i]=='1' && check){
                ans.pb(s1[i+1]);
                count=1;
            }
            else if(s1[i+1]==s2[i] && check){
                ans.pb(s1[i+1]);
                count++;
            }
            else{
                ans.pb(s2[i]);
                check=false;
            }
        }
        ans.pb(s2[n-1]);
        cout<<ans<<endl;
        cout<<count<<endl;

    }
    return 0;
}