#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define trav(a,x) for (auto& a : x)
//#define pb push_back
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
    string s;
    cin>>s;
    lli nb, ns, nc;
    cin>>nb>>ns>>nc;
    lli pb, ps, pc;
    cin>>pb>>ps>>pc;
    lli r;
    cin>>r;
    lli countb=0, counts=0, countc=0;
    loop(i,0,s.length()){
        if(s[i]=='B'){
            countb++;
        }
        else if(s[i]=='S'){
            counts++;
        }
        else{
            countc++;
        }
    }
    lli l=0, h=1e15;
    while(l+1<h){
        lli m=(l+h)/2;
        lli cost=max((lli)0,countb*m-nb)*pb;
        cost+=max((lli)0,counts*m-ns)*ps;
        cost+=max((lli)0,countc*m-nc)*pc;
        if(cost<=r){
            l=m;
        }
        else{
            h=m;
        }
    }
    cout<<l<<endl;
    return 0;
}