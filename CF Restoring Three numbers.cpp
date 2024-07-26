#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli a[4];
    loop(i,0,4){
        cin>>a[i];
    }
    sort(a,a+4);
    cout<<a[3]-a[2]<<" "<<a[3]-a[1]<<" "<<a[3]-a[0];
    return 0;
}