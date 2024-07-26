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
    test{
        lli n;
        cin>>n;
        lli a[n], b[n+1];
        loop(i,0,n){
            cin>>a[i];
        }
        loop(i,0,n+1){
            cin>>b[i];
        }
        lli rem=b[n];
        lli mini=INT64_MAX;
        lli ans=0;
        bool check=false;
        loop(i,0,n){
            if(a[i]>b[i]){
                if(a[i]>=rem && b[i]<=rem){
                    check=true;
                }
            }
            else if(b[i]>a[i]){
                if(b[i]>=rem && a[i]<=rem){
                    check=true;
                }
            }
            ans+=abs(a[i]-b[i]);
        }
        if(check){
            cout<<ans+1<<endl;
        }
        else{
            loop(i,0,n){
                mini=min(mini,min(abs(a[i]-rem), abs(b[i]-rem)));
            }
            cout<<ans+mini+1<<endl;
        }
    }
    return 0;
}