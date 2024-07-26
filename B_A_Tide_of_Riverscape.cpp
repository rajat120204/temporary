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
    lli n, p;
    cin>>n>>p;
    string s;
    cin>>s;
    string s1="";
    loop(i,p,n){
        s1.pb(s[i]);
    }
    // cout<<s<<endl;
    // cout<<s1<<endl;
    bool check=false;
    loop(i,0,min(s.size(),s1.size())){
        if(s[i]==s1[i] && s[i]=='.'){
            check=true;
            s[i]='1';
            s1[i]='0';
            break;
        }
        if(s[i]!=s1[i]){
            check=true;
            if(s[i]=='.'){
                if(s1[i]=='0'){
                    s[i]='1';
                }
                else{
                    s[i]='0';
                }
            }
            if(s1[i]=='.'){
                if(s[i]=='0'){
                    s1[i]='1';
                }
                else{
                    s1[i]='0';
                }
            }
            break;
        }
    }
    if(!check){
        cout<<"NO"<<endl;
    }
    else{
        loop(i,p,n){
            s[i]=s1[i];
        }
        loop(i,0,s.size()){
            if(s[i]=='.'){
                s[i]='1';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}