#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define pb push_back
#define eb emplace_back
using namespace std;

int main()
{
 time
    vector<lli> v;
    v.pb(1);
    v.eb(2);
    vector<pair<lli,lli>> v1;
    v1.pb({1,2});
    v1.eb(1,2);
    // loop(i,0,v1.size()){
    //     cout<<v1[i].first<<" "<<v1[i].second<<endl;
    // }
    vector<lli> v2(5,100);
    vector<lli> v3(5);
    vector<lli> v4(v2);
    return 0;
}