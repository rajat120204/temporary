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
    lli n,k;
    lli sum=0, count=0;
    while(cin>>n>>k){
        lli tim=240-k;
         for(lli i=1; i<=n; i++){
            sum = sum + (5*i);
            if(sum>tim){
                break;
            }
            count+=1;
        }
        cout<<count<<endl;
    }
    
    return 0;
}