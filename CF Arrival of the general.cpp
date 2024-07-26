#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
    }
    lli min_value=a[0], max_value=a[0], min=0, max=0;
    loop(i,0,n){
        if(a[i]<=min_value){
            min_value=a[i];
            min=i;
        }
        if(a[i]>max_value){
            max_value=a[i];
            max=i;
        }
    }
    lli ans=0;
   if(max>min){
       ans=(max-1)+(n-min)-1;
   }
   else{
       ans=(max-1)+(n-min);
   }
   cout<<ans<<endl;
   return 0;
}