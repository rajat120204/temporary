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
    lli n,k;
    cin>>n>>k;
    vector<pair<lli,lli>> v;
    map<pair<lli,lli>,lli> m;
    loop(i,0,n){
        lli p,t;
        cin>>p>>t;
        v.pb({p,t});
        m[v[i]]++;
    }
    pair<lli,lli> temp;
    loop(i,0,n){
        loop(j,i+1,n){
            if(v[i].first<v[j].first){
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
            else if(v[i].first==v[j].first){
                if(v[j].second<v[i].second){
                    temp=v[j];
                    v[j]=v[i];
                    v[i]=temp;
                }
            }   
        }
    }
    cout<<m[v[k-1]]<<endl;
    return 0;
}