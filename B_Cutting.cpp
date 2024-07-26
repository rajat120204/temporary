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
    lli n,b;
    cin>>n>>b;
    lli a[n];
    lli even=0, odd=0;
    loop(i,0,n){
        cin>>a[i];
        if(a[i]%2){
            odd++;
        }
        else{
            even++;
        }
    }
    if(odd!=even){
        cout<<"0"<<endl;
        return 0;
    }
    lli co=0, ce=0, cut=0, cost=0;
    vlli cst;
    loop(i,0,n){
        if(a[i]%2){
            co++;
        }
        else{
            ce++;
        }
        if(co==ce && i!=n-1){
            // cut++;
            // co=0;
            // ce=0;
            cost=abs(a[i]-a[i+1]);
            if(cost<=b){
                cst.pb(cost);
                co=0;
                ce=0;
                cut++;
            }
            //cst.pb(cost);
        }
    }
    // loop(i,0,cst.size()){
    //     cout<<cst[i]<<endl;
    // }
    sort(cst.begin(),cst.end());
    // loop(i,0,cst.size()){
    //     cout<<cst[i]<<endl;
    // }

    lli cuts=0,sum=0;
    loop(i,0,cst.size()){
        sum+=cst[i];
        //cuts++;
        if(sum<=b){
            cuts++;
        }
        else{
            break;
        }
    }
    cout<<cuts<<endl;
    // loop(i,0,cst.size()){
    //     if(cst[i]<=b){
    //         cuts=i+1;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // cout<<cuts<<endl;
    return 0;
}