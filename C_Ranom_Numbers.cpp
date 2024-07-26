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
        string s;
        cin>>s;
        lli cng=-1;
        lli note=-1;
        lli pnt=-1;
        lli cur=-1;
        bool check=false;
        char ch='A';
        ch--;
        loopr(i,0,s.length()){
            if(check){
                if(s[i]<=ch){
                    if(s[i]>s[cng]){
                        cng=i;
                    }
                }
                else{
                    ch=s[i];
                }
            }
            else{
                if(s[i]>=ch){
                    ch=s[i];
                    if(s[i]!='E'){
                        note=i;
                    }
                }
                else{
                    check=true;
                    cng=i;
                }
            }
        }
        if(!check && note!=-1){
            cng=note;
        }
        if(cng!=-1){
            s[cng]='E';
        }
        reverse(s.begin(),s.end());
        vector<char> vp,vn;
        bool checka=false;
        bool checkb=false;
        bool checkc=false;
        bool checkd=false;
        bool checke=false;
        loop(i,0,s.length()){
            if(s[i]=='A'){
                checka=true;
                if(checkb || checkc || checkd || checke){
                    vn.pb('A');
                }
                else{
                    vp.pb('A');
                }
            }
            if(s[i]=='B'){
                checkb=true;
                if(checkc || checkd || checke){
                    vn.pb('B');
                }
                else{
                    vp.pb('B');
                }
            }
            if(s[i]=='C'){
                checkc=true;
                if(checkd || checke){
                    vn.pb('C');
                }
                else{
                    vp.pb('C');
                }
            }
            if(s[i]=='D'){
                checkd=true;
                if(checke){
                    vn.pb('D');
                }
                else{
                    vp.pb('D');
                }
            }
            if(s[i]=='E'){
                checke=true;
                vp.pb('E');
            }
        }
        lli sum=0;
        loop(i,0,vp.size()){
            if(vp[i]=='A'){
                sum+=1;
            }
            if(vp[i]=='B'){
                sum+=10;
            }
            if(vp[i]=='C'){
                sum+=100;
            }
            if(vp[i]=='D'){
                sum+=1000;
            }
            if(vp[i]=='E'){
                sum+=10000;
            }
        }
        loop(i,0,vn.size()){
            if(vn[i]=='A'){
                sum-=1;
            }
            if(vn[i]=='B'){
                sum-=10;
            }
            if(vn[i]=='C'){
                sum-=100;
            }
            if(vn[i]=='D'){
                sum-=1000;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}