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
    lli n,m;
    cin>>n>>m;
    lli count=0;
    loop(i,0,1000){
        loop(j,0,1000){
            if((i*i+j)==n && (i+j*j)==m){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}