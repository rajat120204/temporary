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
lli water(vector<lli> &v, lli height, lli x){
    lli max_water=0;
    loop(i,0,v.size()){
        if(v[i]<height){
            max_water+=(height-v[i]);
            if(max_water>x){
                return max_water;
            }
        }
    }
    return max_water;
}
int main()
{
 time
    test{
        lli n,x;
        cin>>n>>x;
        vlli v(n);
        loop(i,0,n){
            cin>>v[i];
        }
        vlli res;
        
        lli left=1, right=1e18+999999999999999999;
        while(left<=right){
            lli height=left+(right-left)/2;
            lli ans=water(v,height,x);
            if(ans>x){
                right=height-1;
            }
            else if(ans<=x){
                left=height+1;
                res.pb(height);
            }
        }
        cout<<*max_element(res.begin(), res.end())<<endl;
        
    }
    return 0;
}