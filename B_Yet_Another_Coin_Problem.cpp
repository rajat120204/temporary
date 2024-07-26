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

lli coins(vector<lli> &v, lli size, lli n){
    vlli a(n+1, 1e9);
    a[0]=0;
    // loop(i,1,n+1){
    //     a[i]=1e9;
    // }
    loop(i,1,n+1){
        loop(j,0,size){
            if(v[j]<=i){
                lli x=a[i-v[j]];
                if(x!=1e9 && x+1<a[i]){
                    a[i]=x+1;
                }
            }
        }
    }
    if(a[n]==1e9){
        return -1;
    }
    return a[n];
}

int main()
{
 time
    test{
        lli n;
        cin>>n;
        vlli v={15,10,6,3,1};
        lli size=5;
        cout<<coins(v,size,n)<<endl;
    }
    return 0;
}