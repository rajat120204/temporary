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
        lli n;
        cin>>n;
        lli x1=0, x2=0, y1=0, y2=0;
        while(n--){
            lli x,y;
            cin>>x>>y;
            x1=max(x,x1);
            x2=min(x,x2);
            y1=max(y,y1);
            y2=min(y,y2);
        }
        cout<<(2*(x1+y1-x2-y2))<<endl;
    }
    return 0;
}