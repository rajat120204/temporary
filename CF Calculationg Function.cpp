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
    if(n%2==0){
        cout<<n/2<<endl;
    }
    else{
        cout<<(-(n+1)/2)<<endl;
    }
    return 0;
}