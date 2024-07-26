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
    lli n,m;
    cin>>n>>m;
    lli a[n][m];
    loop(i,0,n){
        loop(j,0,m){
            cin>>a[i][j];
        }
    }
    vlli vr1, vr0, vc1, vc0;
    lli cr1=0, cr0=0, cc1=0, cc0=0;
    lli ans=0;
    loop(i,0,n){
        // cr1=0;
        // cr0=0;
        loop(j,0,m){
            if(a[i][j]==1){
                cr1++;
            }
            else{
                cr0++;
            }
        }
        // ans+=(lli)pow(2,cr1);
        // ans--;
        // ans+=(lli)pow(2,cr0);
        // ans--;
        vr1.pb(cr1);
        cr1=0;
        vr0.pb(cr0);
        cr0=0;
    }
    loop(j,0,m){
        // cc1=0;
        // cc0=0;
        loop(i,0,n){
            if(a[i][j]==1){
                cc1++;
            }
            else{
                cc0++;
            }
        }
        // ans+=(lli)pow(2,cc1);
        // ans--;
        // ans+=(lli)pow(2,cc0);
        // ans--;
        vc1.pb(cc1);
        cc1=0;
        vc0.pb(cc0);
        cc0=0;
    }
    
    loop(i,0,vr1.size()){
        ans+=(lli)pow(2,vr1[i]);
        ans--;
        //ans+=(vr1[i]*(vr1[i]+1))/2;
    }
    loop(i,0,vr0.size()){
        ans+=(lli)pow(2,vr0[i]);
        ans--;
       // ans+=(vr0[i]*(vr0[i]+1))/2;
    }
    loop(i,0,vc1.size()){
        ans+=(lli)pow(2,vc1[i]);
        ans--;
       // ans+=(vc1[i]*(vc1[i]+1))/2;
    }
    loop(i,0,vc0.size()){
        ans+=(lli)pow(2,vc0[i]);
        ans--;
       // ans+=(vc0[i]*(vc0[i]+1))/2;
    }
    cout<<ans-(n*m)<<endl;
    return 0;
}