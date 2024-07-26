#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
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
    test
    {
    lli n;
    cin>>n;
    string s;
    cin>>s;
    vlli v1,v2;
    bool check=false;
    loop(i,0,s.length()){
        if(check==false && s[i]=='2'){
            v1.pb(1);
            v2.pb(1);
        }
        else if(s[i]=='2'){
            v1.pb(0);
            v2.pb(2);
        }
        else if(check==false && s[i]=='1'){
            v1.pb(1);
            v2.pb(0);
            check=true;
        }
        else if(s[i]=='1'){
            v1.pb(0);
            v2.pb(1);
        }
        else{
            v1.pb(0);
            v2.pb(0);
        }
    }
    loop(i,0,v1.size()){
        cout<<v1[i];
    }
    cout<<endl;
    loop(i,0,v2.size()){
        cout<<v2[i];
    }
    cout<<endl;
    }
    return 0;
}