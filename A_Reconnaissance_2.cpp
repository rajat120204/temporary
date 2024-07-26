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
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
    }
    vlli v1;
    vector<pair<lli,lli>> v2;
    loop(i,0,n-1){
        v1.push_back(abs(a[i+1]-a[i]));
        v2.push_back({i+1, i+2});
    }
    v1.push_back(abs(a[n-1]-a[0]));
    v2.push_back({n,1});
    lli mini=*min_element(v1.begin(), v1.end());
    lli index=-1;
    loop(i,0,n){
        if(v1[i]==mini){
            index=i;
            break;
        }
    }
    cout<<v2[index].first<<" "<<v2[index].second<<endl;
    return 0;
}