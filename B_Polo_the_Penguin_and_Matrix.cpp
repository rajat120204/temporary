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
    lli n,m,d;
    cin>>n>>m>>d;
    lli a[n][m];
    slli st;
    loop(i,0,n){
        loop(j,0,m){
            cin>>a[i][j];
            st.insert(a[i][j]);
        }
    }
    lli ans=-1;
    for(auto it : st){
        bool check=true;
        lli count=0;
        loop(i,0,n){
            loop(j,0,m){
                lli diff=abs(a[i][j]-it);
                if(diff%d==0){
                    count+=(diff/d);
                }
                else{
                    check=false;
                    break;
                }
            }
        }
        if(check){
            if(ans==-1 || count<ans){
                ans=count;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}