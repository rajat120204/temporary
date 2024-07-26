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
    test{
        lli x1,y1,x2,y2,fx,fy;
        cin>>x1>>y1>>x2>>y2>>fx>>fy;
        lli ans=abs(x2-x1)+abs(y2-y1);
        if(x1==x2 && x1==fx && ((y1>fy && fy>y2) || (y1<fy && fy<y2))){
            ans+=2;
        }
        else if(y1==y2 && y1==fy && ((x1>fx && fx>x2) || (x1<fx && fx<x2))){
            ans+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}