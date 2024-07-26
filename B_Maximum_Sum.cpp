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
        lli n, k;
        cin>>n>>k;
        vlli v;
        lli sum=0,end_sum=0;
        loop(i,0,n){
            lli x;
            cin>>x;
            sum+=x;
            v.pb(x);
        }
        sort(v.begin(), v.end());
        loop(i,n-k,n) end_sum+=v[i];
        lli l=0, r=n-1,ans=sum-end_sum,rmv=n-k;
        while(k--){
            lli lsum=v[l]+v[l+1], rsum=v[r];
            if(lsum<=rsum){
                l+=2;
                sum-=lsum;
                end_sum-=v[rmv];
                rmv++;
            }
            else{
                r--;
                sum-=rsum;
                end_sum-=rsum;
            }
            // cout<<end_sum<<endl;
            ans=max(ans,sum-end_sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}