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
        lli sum=0;
        loop(i,0,n){
            cin>>a[i];
            sum+=a[i];
        }
        
        if(sum==n){
            cout<<"0"<<endl;
        }
        else if(sum<=0 || sum-n<=0){
            cout<<"1"<<endl;
        }
        else{
            cout<<sum-n<<endl;
        }        

    }
    return 0;
}