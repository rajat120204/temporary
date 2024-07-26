#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n;
    cin>>n;
    lli a[5]={100, 20, 10, 5, 1};
    lli answer=0;
    loop(i,0,5){
        answer+=n/a[i];
        n=n%a[i];
    }
    cout<<answer<<endl;
    return 0;
}