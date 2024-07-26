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
    lli a[4];
    loop(i,0,4){
        cin>>a[i];
    }
    string s;
    cin>>s;
    lli ans=0;
    loop(i,0,s.length()){
        if(s[i]=='1'){
            ans+=a[0];
        }
        else if(s[i]=='2'){
            ans+=a[1];
        }
        else if(s[i]=='3'){
            ans+=a[2];
        }
        else if(s[i]=='4'){
            ans+=a[3];
        }
    }
    cout<<ans<<endl;
    return 0;
}