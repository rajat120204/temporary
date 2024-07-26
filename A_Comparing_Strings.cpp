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
    string s1,s2;
    cin>>s1>>s2;
    lli l1=s1.length();
    lli l2=s2.length();
    if(l1!=l2){
        cout<<"NO"<<endl;
        return 0;
    }
    lli count=0;
    vector<char> c1,c2;
    loop(i,0,l1){
        if(s1[i]!=s2[i]){
            count++;
            c1.pb(s1[i]);
            c2.pb(s2[i]);
        }
    }
    if(count!=2){
        cout<<"NO"<<endl;
    }
    else{
        if(c1[0]==c2[1] && c2[0]==c1[1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}