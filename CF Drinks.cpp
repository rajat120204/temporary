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
    long double a[n], sum=0;
    loop(i,0,n){
        cin>>a[i];
        sum+=a[i];   
    }
    cout<<(sum/n)<<endl;
    return 0;
}