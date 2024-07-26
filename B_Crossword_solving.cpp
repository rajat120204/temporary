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
    lli n,m;
    cin>>n>>m;
    string s1, s2;
    cin>>s1>>s2;
    vlli ans;
    lli mini=INT_MAX;
    loop(i,0,s2.size()){
        if(s2.size()-i<s1.size()){
            break;
        }
        lli count=0;
        loop(j,0,s1.size()){
            count+=(s1[j]!=s2[i+j]);
        }
        if(mini>count){
            mini=count;
            ans.clear();
            loop(j,0,s1.size()){
                if(s1[j]!=s2[i+j]){
                    ans.pb(j+1);
                }
            }
        }
    }
    cout<<mini<<endl;
    loop(i,0,ans.size()){
        cout<<ans[i]<<" ";
    }
    return 0;
}