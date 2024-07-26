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
        lli ans=0;
        cin>>n;
        string s;
        string s1;
        lli n1;
        if(n<=9){
            ans=n;
        }
        
        else{
            s=to_string(n);
            ans+=9*(s.length()-1);
            s1=s;
            loop(i,0,s.length()){
                s1[i]='1';
            }
            n1=stoi(s1);
            n=n/n1;
            ans+=n;
        }
        cout<<ans<<endl;
    }
    return 0;
}