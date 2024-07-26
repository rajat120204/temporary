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
    lli n,l;
    cin>>n>>l;
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    lli d=0;
    float max=0;
    loop(i,0,n-1){
        d=a[i+1]-a[i];
        if(float(d)>max){
            max=float(d);
        }
    }
    max/=2;
    lli left=a[0];
    lli right=l-a[n-1];
    if(float(left)>max){
        max=float(left);
    }
    if(float(right)>max){
        max=float(right);
    }
    cout<<setprecision(10)<<max<<endl;
    return 0;
}