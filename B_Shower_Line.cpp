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
    lli a[5][5];
    loop(i,0,5){
        loop(j,0,5){
            cin>>a[i][j];
        }
    }
    lli b[]={0,1,2,3,4};
    lli ans=0, c=0;
    do{
        loop(i,0,5){
            loop(j,0,5){
                c=a[b[0]][b[1]]+a[b[1]][b[0]]+a[b[1]][b[2]]+a[b[2]][b[1]]+2*(a[b[2]][b[3]]+a[b[3]][b[2]]+a[b[3]][b[4]]+a[b[4]][b[3]]);
                ans=max(c,ans);
            }
        }
    }while(next_permutation(b,b+5));
    cout<<ans<<endl;
    return 0;
}