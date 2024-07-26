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
    lli r,g,b;
    cin>>r>>g>>b;
    lli ans1=r/3+g/3+b/3;
    lli ans2=(r-1)/3+(g-1)/3+(b-1)/3;
    lli ans3=(r-2)/3+(g-2)/3+(b-2)/3;
    if(r>=1 && g>=1 && b>=1){
        ans2++;
    }
    if(r>=2 && g>=2 && b>=2){
        ans3+=2;
    }
    cout<<max(ans1,max(ans2,ans3))<<endl;
    return 0;
}