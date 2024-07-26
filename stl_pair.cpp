#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;

int main()
{
 time
    pair<lli,lli> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<lli,pair<lli,lli>> p1={1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<lli,lli> arr[]={{1,2}, {2,5}, {5,1}};
    cout<<arr[1].second<<endl;
    return 0;
}