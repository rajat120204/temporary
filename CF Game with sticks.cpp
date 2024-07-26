#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n,m;
    cin>>n>>m;
    lli a=min(n,m);
    if(a%2==0){
        cout<<"Malvika"<<endl;
    }
    else cout<<"Akshat"<<endl;
    return 0;
}