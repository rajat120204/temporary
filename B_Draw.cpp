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
    lli n;
    cin>>n;
    if(n==1){
        lli a,b;
        cin>>a>>b;
        cout<<min(a,b)+1<<endl;
    }
    else{
    vector<pair<lli,lli>> v;
    //v.pb({0,0});
    loop(i,0,n){
        lli a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    // if(n==1){
    //     cout<<min(v[0].first,v[0].second)+1<<endl;
    //     return 0;
    // }
    lli ans=min(v[0].first,v[0].second)+1;
    bool check=v[0].first==v[0].second;
    loop(i,1,n){
        // if(v[i].first>=max(v[i-1].first, v[i-1].second) && v[i].second>=max(v[i-1].first,v[i-1].second)){
        //     ans+=(min(v[i].first,v[i].second)-max(v[i-1].first,v[i-1].second));
        // }
        if(v[i].first==v[i-1].first && v[i].second==v[i-1].second){
            continue;
        }
        lli curr=min(v[i].first,v[i].second)-max(v[i-1].first,v[i-1].second);
        if(curr>=0){
            if(check){
                ans+=curr;
            }
            else{
                ans+=curr;
                ans++;
            }
            
        }
        if(v[i].first==v[i].second){
            check=true;
        }
        else{
            check=false;
        }
        
    }
    cout<<ans<<endl;
    }
    
    return 0;
}