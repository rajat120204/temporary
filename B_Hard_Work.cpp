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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    lli n;
    cin>>n;
    string ss1="";
    string ss2="";
    string ss3="";
    loop(i,0,s1.length()){
        if(s1[i]>='A' && s1[i]<='Z' || s1[i]>='a' && s1[i]<='z'){
            ss1.pb(s1[i]);
        }
    }
    loop(i,0,s2.length()){
        if(s2[i]>='A' && s2[i]<='Z' || s2[i]>='a' && s2[i]<='z'){
            ss2.pb(s2[i]);
        }
    }
    loop(i,0,s3.length()){
        if(s3[i]>='A' && s3[i]<='Z' || s3[i]>='a' && s3[i]<='z'){
            ss3.pb(s3[i]);
        }
    }
    transform(ss1.begin(), ss1.end(), ss1.begin(), ::tolower);
    transform(ss2.begin(), ss2.end(), ss2.begin(), ::tolower);
    transform(ss3.begin(), ss3.end(), ss3.begin(), ::tolower);
    string a=ss1+ss2+ss3;
    string b=ss1+ss3+ss2;
    string c=ss2+ss1+ss3;
    string d=ss2+ss3+ss1;
    string e=ss3+ss2+ss1;
    string f=ss3+ss1+ss2;
    while(n--){
        string s;
        cin>>s;
        string ans="";
        loop(i,0,s.length()){
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'){
                ans.pb(s[i]);
            }
        }
        transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
        if(ans==a || ans==b || ans==c || ans==d || ans==e || ans==f){
            cout<<"ACC"<<endl;
        }
        else{
            cout<<"WA"<<endl;
        }
    }
    return 0;
}