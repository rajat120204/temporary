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
    lli a,b;
    cin>>a>>b;
    lli c=a+b;
    string as=to_string(a);
    string bs=to_string(b);
    string cs=to_string(c);
    string as1="", bs1="", cs1="";
    loop(i,0,as.length()){
        if(as[i]=='0'){
            continue;
        }
        as1.pb(as[i]);
    }
    loop(i,0,bs.length()){
        if(bs[i]=='0'){
            continue;
        }
        bs1.pb(bs[i]);
    }
    loop(i,0,cs.length()){
        if(cs[i]=='0'){
            continue;
        }
        cs1.pb(cs[i]);
    }
    lli ias=stoi(as1);
    lli ibs=stoi(bs1);
    lli ics=stoi(cs1);
    if(ias+ibs==ics){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}