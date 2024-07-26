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
    lli ans=0;
    if(n<0){
      
      lli rem1=n/10;
      lli rem2=n/100;
      lli n1=rem1;
      lli n2=(rem2*10)+n%10;
      if(n1<n2){
        ans=n2;
      }
      else{
        ans=n1;
      }
    }
    else{
        ans=n;
    }
    cout<<ans<<endl;  
    return 0;
}