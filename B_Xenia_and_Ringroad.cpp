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
    lli n,m;
    cin>>n>>m;
    vector<lli> v;
    lli a;
    lli count=0;
    loop(i,0,m){
        cin>>a;
        v.push_back(a);
        if(i>0){
            if(v[i-1]>v[i]){
                count++;
            }
        }
    }
    lli ans = count*n + v[m-1]-1;
    cout<<ans<<endl;
    return 0;
}