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
        lli w,h,n;
        cin>>w>>h>>n;
        lli count=1;
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        while(w%2==0){
            count*=2;
            w/=2;
            }
        while(h%2==0){
            count*=2;
            h/=2;
            }
        if(count>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}