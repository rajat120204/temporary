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
        lli a[n], b[n];
        lli min_apple=a[0], min_orange=b[0];
        loop(i,0,n){
            cin>>a[i];
            if(a[i]<min_apple){
                min_apple=a[i];
            }
        }
         loop(i,0,n){
            cin>>b[i];
            if(b[i]<min_orange){
                min_orange=b[i];
            }
        }
        lli ans=0;
        loop(i,0,n){
            ans+=max((a[i]-min_apple), (b[i]-min_orange));
        }
        cout<<ans<<endl;
    }
    return 0;
}