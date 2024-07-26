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
    lli a,b,c,d;
    cin>>a>>b>>c>>d;
    lli x=d*a/c;
    if(x<b){
        lli num=b*c-a*d;
        lli den=b*c;
        lli div;
        while(__gcd(num,den)!=1){
            div=__gcd(num,den);
            num/=div;
            den/=div;
        }
        cout<<num<<"/"<<den<<endl;
    }
    else{
        lli num=a*d-b*c;
        lli den=a*d;
        lli div;
        while(__gcd(num,den)!=1){
            div=__gcd(num,den);
            num/=div;
            den/=div;
        }
        cout<<num<<"/"<<den<<endl;
    }
    return 0;
}