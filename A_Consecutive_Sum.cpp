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
        lli n,k;
        cin>>n>>k;
        lli a[k]={0};
        loop(i,0,n){
            lli x;
            cin>>x;
            a[i%k]=max(a[i%k],x);
        }
        lli sum=0;
        loop(i,0,k){
            sum+=a[i];
        }
        cout<<sum<<endl;

    }
    return 0;
}