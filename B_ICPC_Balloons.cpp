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
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        lli count=0;
        lli ans;
        loop(i,0,n-1){
            if(s[i]==s[i+1]){
                count++;
            }
        }
        lli a=n-count;
        ans=(2*a)+count;
        cout<<ans<<endl;
    }
    return 0;
}