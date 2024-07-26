#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define PI 3.141592653589793238462643383279
using namespace std;
long long m=1000000007;


void solve()
{
  long long n;
  cin>>n;
  long long a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  map<long long,long long>ma;
  for(int i=0;i<n;i++)
  {
    long long x;
    x=a[i];
    for(int j=2;j*j<=x;j++)
    {
      int count=0;
      while(x%j==0)
      {
        count++;
        x=x/j;
      }
      ma[j]+=(count*(i+1));
    }
    if(x!=1)
    {
      ma[x]+=((i+1));
    }
  }
  long long ans=1;
  for(auto it:ma)
  {
     ans=(ans*(it.second+1))%m;
  }
  cout<<ans<<endl;

}

int main() 
{

fast;
int t;
// cin>>t;

t=1;
while(t--)
{
	solve();
	
}
return 0;
}