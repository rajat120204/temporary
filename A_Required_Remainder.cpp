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
        lli x,y,n;
        cin>>x>>y>>n;
        lli rem=n%x;
        lli ans=0;
        if(rem==y){
            ans=n;
        }
        else if(rem>y){
            ans=n-(rem-y);
        }
        else{
            ans=n-((x-y)+rem);
        }
        cout<<ans<<endl;
    }
    return 0;
}