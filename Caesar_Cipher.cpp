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
        lli n;
        cin>>n;
        string s,t,u;
        cin>>s>>t>>u;
        lli diff;
        if(t[0]>=s[0]){
            diff=t[0]-s[0];
        }
        else{
            diff=122-s[0]+t[0]-97+1;
        }
        loop(i,0,n){
            lli curr=u[i]-'a';
            curr+=diff;
            curr%=26;
            char ch='a'+curr;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}