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
        lli c1=0, c2=0, ans=0;
        loop(i,0,n){
            if(s[i]=='('){
                c1++;
            }
            else{
                c2++;
            }
            if(c2>c1){
                ans++;
                c2--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}