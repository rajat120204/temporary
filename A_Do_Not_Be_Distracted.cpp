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
        string s1;
        char c=s[0];
        lli m=0;
        bool check=true;
        loop(i,0,n){
            if(s[i]!=c){
                s1[m]=c;
                c=s[i];
                m++;
            }
            loop(j,0,m){
                if(s[i]==s1[j]){
                    cout<<"NO"<<endl;
                    check=false;
                    break;
                }
            }
            if(check==false){
                    break;
                }
        }
        if(check){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}