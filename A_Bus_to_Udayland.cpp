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
        lli n;
        cin>>n;
        vector<string> sv;
        string s;
        bool check=true;
        loop(i,0,n){
            cin>>s;
            if(s[0]=='O' && s[1]=='O' && check==true){
               s[0]='+';
               s[1]='+';
               check=false;
            }
            if(s[3]=='O' && s[4]=='O' && check==true){
               s[3]='+';
               s[4]='+';
               check=false;
            }
            sv.push_back(s);
        }
        if(check==true){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            loop(i,0,n){
                cout<<sv[i]<<endl;
            }
        }
    
    return 0;
}