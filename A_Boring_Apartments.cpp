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
        lli n1=n%10;
        lli ans1 = 10*(n1-1);
        string s=to_string(n);
        lli l=s.length();
        lli ans2 = ((l)*(l+1))/2;
        cout<<ans1+ans2<<endl;
    }
    return 0;
}