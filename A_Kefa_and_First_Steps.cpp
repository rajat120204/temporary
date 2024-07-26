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
    vector<int> v;
    lli count=1;
    lli ans=1;
    loop(i,0,n){
        cin>>a[i];
    }
    loop(i,0,n-1){
        if(a[i+1]>=a[i]){
            count++;
            if(count>ans){
                ans=count;
            }
        }
        else{
            count=1;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}