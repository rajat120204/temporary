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
    lli a[n];
    lli c=0, e=0, h=0;
    loop(i,0,n){
        cin>>a[i];
        if(h<a[i] && e<a[i]-h){
            h+=e;
            c+=(a[i]-h);
            e=0;
            h=a[i];
        }
        if(h>a[i]){
            e+=(h-a[i]);
            h=a[i];
        }
    }
    cout<<c<<endl;
    return 0;
}