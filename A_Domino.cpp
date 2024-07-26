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
    lli n;
    cin>>n;
    vector<pair<lli,lli>> vp;
    loop(i,0,n){
        lli x,y;
        cin>>x>>y;
        vp.pb({x,y});
    }
    lli sum1=0, sum2=0;
    bool check=false;
    trav(it,vp){
        sum1+=it.first;
        sum2+=it.second;
        if((it.first%2==0 && it.second%2!=0) || (it.first%2!=0 && it.second%2==0)){
            check=true;
        }
    }
    if(sum1%2==0 && sum2%2==0){
        cout<<"0"<<endl;
    }
    else if(sum1%2!=0 && sum2%2!=0 && check==true){
        cout<<"1"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}