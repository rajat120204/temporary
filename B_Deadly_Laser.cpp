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
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        if((max(1,sx-d)==1 && min(n,sx+d)==n) || (max(1,sy-d)==1 && min(m,sy+d)==m) || (max(1,sx-d)==1 && max(1,sy-d)==1) || (min(n,sx+d)==n && min(m,sy+d)==m)){
            cout<<"-1"<<endl;
        }
        else{
            cout<<abs(n-1)+abs(m-1)<<endl;
        }
    }
    return 0;
}