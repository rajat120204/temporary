#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;

int main()
{
 time
    lli n,m,a,b;
    cin>>n>>m>>a>>b;
    lli ans=0;
    lli ans1=0;
    if(a<=(b/m)){
        ans=n*a;
    }
    else{
        if((n%m)*a>b){
            ans1=b;
        }
        else{
            ans1=(n%m)*a;
        }
        ans=ans1+(n/m)*b;
    }

    cout<<ans<<endl;
    return 0;
}