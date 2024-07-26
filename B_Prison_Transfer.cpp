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
    lli n,t,c;
    cin>>n>>t>>c;
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
        if(a[i]>t){
            a[i]=-1;
        }
    }
    lli count=0;
    lli ans=0;
    loop(i,0,n){
        if(a[i]!=-1){
            count++;
        }
        else{
            if(count>=c){
                ans+=(count-c+1);
            }
            count=0;
        }
    }
    if(count>=c){
        ans+=(count-c+1);
    }
    cout<<ans<<endl;

    return 0;
}