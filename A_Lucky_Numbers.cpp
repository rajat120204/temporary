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
        lli l,r;
        cin>>l>>r;
        lli ans=-1;
        lli max_diff=-1;
        for(lli i=l; i<=min(r,l+100); i++){
            string s=to_string(i);
            lli diff=*max_element(s.begin(),s.end())-*min_element(s.begin(),s.end());
            if(diff==9){
                ans=i;
                break;
            }
            if(diff>max_diff){
                max_diff=diff;
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}