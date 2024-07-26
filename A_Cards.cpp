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
    lli n;
    cin>>n;
    lli count_one=0, count_zero=0;
    string s;
    cin>>s;
    loop(i,0,n){
        if(s[i]=='z') count_zero++;
        if(s[i]=='n') count_one++;
    }
    loop(i,0,count_one){
        cout<<"1 ";
    }
    loop(i,0,count_zero){
        cout<<"0 ";
    }
    cout<<endl;
    return 0;
}