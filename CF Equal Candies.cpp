#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    test{
        lli n;
        cin>>n;
        lli a[n];
        loop(i,0,n){
            cin>>a[i];
        }
        sort(a,a+n);
        lli ans=0;
        loop(i,0,n){
            ans=ans+(a[i]-a[0]);
        }
        cout<<ans<<endl;
    }
    return 0;
}