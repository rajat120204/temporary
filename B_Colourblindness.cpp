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
        string s1, s2;
        cin>>s1>>s2;
        lli count=0;
        loop(i,0,n){
            if(s1[i]==s2[i] || (s1[i]=='G' && s2[i]=='B') || (s1[i]=='B' && s2[i]=='G')){
                count++;
            }
        }
        if(count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}