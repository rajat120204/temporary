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

lli divisor(lli n)
{
    lli ans=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0) 
        {
            ans++;
            if(i*i!=n) ans++;
        }
    }
    return ans;
}

int main()
{
 time
    lli a,b,c;
    cin>>a>>b>>c;
    lli mod=1073741824;
    lli ans=0;
    vlli v(1000001,0);
    loop(i,1,a+1){
        loop(j,1,b+1){
            loop(k,1,c+1){
                lli sum=i*j*k;
                if(v[sum]==0) v[sum]=divisor(sum);
                ans+=v[sum];
                ans%=mod;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}