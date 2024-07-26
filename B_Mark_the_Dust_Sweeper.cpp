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
        lli a[n];
        loop(i,0,n){
            cin>>a[i];
        }
        bool check=false;
        lli index=0;
        loop(i,0,n){
            if(a[i]>0 && check==false){
               index=i;
               check=true;
            }
        }
        lli ans=0;
        if(check){
          loop(i,index,n-1){
            if(a[i]==0){
                ans++;
            }
            else{
                ans+=a[i];
            }
        }
    }
        
        cout<<ans<<endl;
    }
    return 0;
}