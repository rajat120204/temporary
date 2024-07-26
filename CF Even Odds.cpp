#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n,k;
    cin>>n>>k;
    if(k<=((n+1)/2)){
        cout<<(k*2)-1<<endl;
    }
    else{
        cout<<(k-((n+1)/2))*2<<endl;
    }
    return 0;
}