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
    string s;
    cin>>s;
    vc v1, v2;
    loop(i,0,n){
        v1.pb(s[i]);
    }
    loop(i,n,2*n){
        v2.pb(s[i]);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    bool check=true;
    if(v1[0]<v2[0]){
        loop(i,1,n){
            if(v1[i]>=v2[i]){
                check=false;
                break;
            }
        }
    }
    else if(v1[0]>v2[0]){
        loop(i,1,n){
            if(v1[i]<=v2[i]){
                check=false;
                break;
            }
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}