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
    lli answer=n+(n/m);
    if(n/m==1){
        cout<<answer;
    }
    else{
        cout<<(answer+1);
    }
    return 0;
}