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
    lli n, m;
    cin>>n;
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
    }
    cin>>m;
    lli b[m];
    loop(i,0,m){
        cin>>b[i];
    }
    vlli v;
    loop(i,0,m){
        loop(j,0,n){
            if(b[i]%a[j]==0){
                v.push_back(b[i]/a[j]);
            }
        }
    }
    sort(v.begin(), v.end());
    lli maxi=v[v.size()-1];
    lli count=0;
    loopr(i,0,v.size()){
        if(v[i]==maxi){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}