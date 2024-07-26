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
    lli a,b;
    cin>>a>>b;
    lli ans1, ans2;
    if(a>b){
      ans1=b;
      if((a-b)%2==0){
        ans2=(a-b)/2;
      }
      else{
        ans2=(a-b-1)/2;
      }
    }
    else if(a<b){
        ans1=a;
        if((b-a)%2==0){
        ans2=(b-a)/2;
      }
      else{
        ans2=(b-a-1)/2;
      }
    }
    else{
        ans1=a;
        ans2=0;
    }
    cout<<ans1<<" "<<ans2<<endl;

    return 0;
}