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
    lli a[m];
    loop(i,0,m){
        cin>>a[i];
    }
    sort(a,a+m);
    int mi = 1001;
    for (int i = 0; i+n-1< m; i++)
    {
        int x = a[i+n-1]-a[i];
        mi = min(x,mi);
    }
    cout<<mi<<endl;
    return 0;
}