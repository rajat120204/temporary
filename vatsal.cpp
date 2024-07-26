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
    string s;
    cin>>s;
    if(s[0]>='5'){
        if(s[0]=='9'){
            cout<<"9";
        }
        else{
            cout<<'9'-s[0];
        }
    }
    else{
        cout<<s[0];
    }
    for(lli i=1; i<s.length(); i++){
        if(s[i]>='5'){
            cout<<'9'-s[i];
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}