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
        lli a,b,c;
        lli d=0;
        cin>>a>>b>>c;
        cout<<(max(max(b,c)+1-a,d))<<" "<<(max(max(a,c)+1-b,d))<<" "<<(max(max(b,a)+1-c,d))<<endl;

    }
    return 0;
}