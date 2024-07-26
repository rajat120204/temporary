#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli k,n,w;
    cin>>k>>n>>w;
    lli sum=0;
    for(lli i=1; i<=w; i++){
        sum+=(i*k);
    }
    if(sum>n){
       cout<<(sum-n)<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}