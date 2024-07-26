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
	 lli c=0;
	 lli d=0;
	 loop(i,0,n){
		 lli a,b;
		 cin>>a>>b;
		 d-=a;
		 d+=b;
		 c=max(c,d);

	 }
	 cout<<c;
    return 0;
}