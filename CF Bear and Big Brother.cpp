#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli a,b;
    cin>>a>>b;
    lli count=0;
    while(a>0 && b>0){
         a*=3;
         b*=2;
         count++;
         if(a>b){
             break;
         }
    }
    cout<<count;
    return 0;
}