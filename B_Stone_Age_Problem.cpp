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
    lli n, q;
    cin>>n>>q;
    mll m;
    lli a[n];
    lli sum=0;
    loop(i,0,n){
        cin>>a[i];
        m[i+1]=a[i];
        sum+=a[i];
    }
    lli value;
    while(q--){
        lli t;
        cin>>t;
        if(t==1){
            lli ind, x;
            cin>>ind>>x;
            if(m[ind]!=0){
                sum-=m[ind];
                sum+=x;
                m[ind]=x;
                cout<<sum<<endl;
            }
            else{
                sum-=value;
                sum+=x;
                m[ind]=x;
                cout<<sum<<endl;
            }
        }
        else{
            lli x;
            cin>>x;
            sum=n*x;
            cout<<sum<<endl;
            value=x;
            m.clear();
        } 
    }
    return 0;
}