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
    string s;
    cin>>s;
    lli ans=0;
    loop(i,0,s.length()){
        loop(j,i+1,s.length()){
            loop(k,j+1,s.length()){
                if(s[i]=='Q' && s[j]=='A' && s[k]== 'Q'){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}