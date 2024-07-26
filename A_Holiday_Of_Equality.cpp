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
    lli n;
    cin>>n;
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
    }
    lli max=a[0];
    lli b[n];
    loop(i,0,n){
        if(a[i]>max){
            max=a[i];
        }
    }
    lli sum=0;
    loop(i,0,n){
        b[i]=max-a[i];
        sum+=b[i];
    }
    cout<<sum<<endl;
    return 0;
}