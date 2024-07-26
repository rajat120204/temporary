#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n,h,width=0;
    cin>>n>>h;
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
        if(a[i]<=h){
            width++;
        }
        else{
            width+=2;
        }
    }
    cout<<width<<endl;
    return 0;
}