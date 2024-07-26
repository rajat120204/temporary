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
        lli n,q;
        cin>>n>>q;
        lli a[n];
        loop(i,0,n){
            cin>>a[i];
        }
        sort(a,a+n);
        vector<pair<lli,lli>> query;
        loop(i,0,q){
            lli x;
            cin>>x;
            query.pb({x,i});
        }
        sort(query.begin(),query.end());
        vlli triplet;
        for(lli i=1; i<=n-2; i++){
            lli x=((n-i)*(n-i-1))/2;
            triplet.pb(x);
        }
        vlli ans(q);
        lli j=0, sub=0;
        loop(i,0,triplet.size()){
            if(j>=q){
                break;
            }
            //query[j].first-=sub;
            while(j<q && (query[j].first-sub)<=triplet[i]){
                
                ans[query[j].second]=a[i];
                j++;
                
            }
            sub+=triplet[i];
        }
        loop(i,0,q){
            cout<<ans[i]<<endl;
        }
        // vlli triplet;
        // loop(i,0,n-2){
        //     loop(j,i+1,n-1){
        //         loop(k,j+1,n){
        //             lli mini=min(a[i],min(a[j],a[k]));
        //             triplet.pb(mini);
        //         }
        //     }
        // }
        // sort(triplet.begin(),triplet.end());
        // while(q--){
        //     lli query;
        //     cin>>query;
        //     cout<<triplet[query-1]<<endl;
        // }
    }
    return 0;
}