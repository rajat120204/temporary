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
#define mcl map<char,lli>
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
        string s;
        cin>>s;
        mcl m;
        loop(i,0,n){
            m[s[i]]++;
        }
        lli ans=m.size();
        mcl m1;
        loop(i,0,n){
            m[s[i]]--;
            m1[s[i]]++;
            if(m[s[i]]==0){
                m.erase(s[i]);
            }
            ans=max(ans, (lli)m.size()+(lli)m1.size());
        }
        cout<<ans<<endl;
    }
    return 0;
}