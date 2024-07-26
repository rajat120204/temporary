#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    test{
        lli n;
        cin>>n;
        string s;
        cin>>s;
        lli cnt1=0, cnt2=0;
        loop(i,0,n){
            if(s[i]=='0' && s[i+1]=='0'){
                cnt1++;
            }
            if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
                cnt2++;
            }
        }
        cout<<((cnt1*2)+cnt2)<<endl;
    }   
    return 0;
}