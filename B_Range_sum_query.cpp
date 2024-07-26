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
    lli n, q;
    cin>>n>>q;
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
    }
    lli l[q], r[q];
    loop(i,0,q){
        cin>>l[i]>>r[i];
    }
    lli b[n], sum=0;
    loop(i,0,n){
        sum+=a[i];
        b[i]=sum;
    }
    loop(i,0,q){
        cout<<b[r[i]-1]-b[l[i]-1]+a[l[i]-1]<<endl;
    }
    return 0;
}