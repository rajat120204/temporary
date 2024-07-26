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
    lli n, target;
    cin>>n>>target;
    vcp vp;
    loop(i,0,n){
        lli x;
        cin>>x;
        vp.pb({x,i+1});
    }
    sort(vp.begin(), vp.end());
    loop(i,0,n){
        lli left=i+1, right=n-1;
        lli required=target-vp[i].first;
        while(left<right){
            
            if(left!=i && right!=i && vp[left].first+vp[right].first==required){
                cout<<vp[i].second<<" "<<vp[left].second<<" "<<vp[right].second<<endl;
                return 0;
            }
            if(vp[left].first+vp[right].first<required){
                left++;
            }
            else{
                right--;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}