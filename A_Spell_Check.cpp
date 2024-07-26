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
        if(n!=5){
          cout<<"NO"<<endl;
        }
        else{
            sort(s.begin(), s.end());
            if(s[0]=='T' && s[1]=='i' && s[2]=='m' && s[3]=='r' && s[4]=='u'){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}