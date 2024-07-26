#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;
void solve()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int x=0,y=0;
   for(int i=0;i<n;i++)
   {
    if(a[i]==1)
    {
    x=i;
    break;
    }
   }
//    cout<<x<<endl;
   for(int i=n-1;i>=0;i--)
   {
    if(a[i]==1)
    {
    y=i;
    break;
    }
   }
   int c=0;
    for(int i=x+1;i<y;i++)
    {
        if(a[i]==0)
        c++;
    }
    cout<<c<<endl;

   
   

}

int main()
{
 time
    int t=1;
     cin>>t;
    while(t--)
    solve();
    return 0;
}