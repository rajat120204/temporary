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
    lli n;
    cin>>n;
    lli x[n], y[n];
    loop(i,0,n){
        cin>>x[i]>>y[i];
    }
    lli ans=0;
    loop(i,0,n){
        lli a=0, b=0, c=0, d=0;
        loop(j,0,n){
            if(x[i]>x[j] && y[i]==y[j]){
                a++;
            }
            else if(x[i]<x[j] && y[i]==y[j]){
                b++;
            }
            else if(x[i]==x[j] && y[i]>y[j]){
                c++;
            }
            else if(x[i]==x[j] && y[i]<y[j]){
                d++;
            }
            if(a>0 && b>0 && c>0 && d>0){
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}