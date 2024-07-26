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
        lli sum=0;
        loop(i,0,n){
            cin>>a[i];
            sum+=a[i];
        }
        while(q--){
            lli l,r,k;
            cin>>l>>r>>k;
            lli sum1=0;
            loop(i,l-1,r){
                sum1+=a[i];
            }
            lli ans=sum-sum1;
            ans+=((r-l+1)*k);
            if(ans%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }

        }
    }
    return 0;
}