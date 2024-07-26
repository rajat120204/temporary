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
    string s;
    map<string,lli> m;
    loop(i,0,n){
        cin>>s;
        if(m[s]==0){
            cout<<"OK"<<endl;
            m[s]=1;
        }
        else{
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }
    
    return 0;
}