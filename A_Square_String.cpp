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
        string s;
        cin>>s;
        bool check=true;
       
        lli len2=(s.length())/2;
        loop(i,0,s.length()/2){
            if(s[i] != s[len2]){
                check=false;
            }   
            len2++;
        }
        if(s.length()%2!=0){
            check=false;
        }
        if(check==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}