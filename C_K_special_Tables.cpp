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
    lli n, k;
    cin>>n>>k;
    lli a[n][n];
    lli element=1;
    loop(i,0,n){
        loop(j,0,k-1){
            a[i][j]=element;
            element++;
        }
    }
    loop(i,0,n){
        loop(j,k-1,n){
            a[i][j]=element;
            element++;
        }
    }
    lli sum=0;
    loop(i,0,n){
        sum+=a[i][k-1];
    }
    cout<<sum<<endl;
    loop(i,0,n){
        loop(j,0,n){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}