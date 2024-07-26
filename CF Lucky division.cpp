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
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%447==0 || n%474==0 || n%774==0 || n%747==0 || n%477==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}