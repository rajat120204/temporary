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
        lli a, b, c;
        cin>>a>>b>>c;
        lli diff=abs(a-b);
        if(a==b){
            cout<<"0"<<endl;
        }
        else if(diff<=c){
            cout<<"1"<<endl;
        }
        else{
            lli diff1;
            if(diff%2==0){
                diff1=diff/2;
            }
            else{
                diff1=(diff+1)/2;
            }
            lli ans;
            if(diff1%c==0){
                ans=diff1/c;
            }
            else{
                ans=diff1/c;
                ans++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}