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
        lli a[n];
        loop(i,0,n){
            cin>>a[i];
        }
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        lli ans=INT64_MIN;
        lli maxi=INT64_MIN;
        lli mini=INT64_MAX;
        loop(i,1,n){
            if(!(n%i)){
                lli temp=0;
                maxi=INT64_MIN;
                mini=INT64_MAX;
                loop(j,0,n){
                    temp+=a[j];
                    if((j+1)%i==0){
                        maxi=max(temp,maxi);
                        mini=min(temp,mini);
                        temp=0;
                    }
                }
                ans=max(ans,maxi-mini);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}