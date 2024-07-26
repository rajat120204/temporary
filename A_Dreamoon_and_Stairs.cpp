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
    lli ans=0;
    int a=(n+1)/2;
    if(m>n){
        ans=-1;
    }
    else{
        if(a%m==0){
            ans=a;
        }
        else{
            ans=m*(a/m+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}