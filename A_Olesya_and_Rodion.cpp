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
    lli n,t;
    cin>>n>>t;
    if(t!=10){
        loop(i,0,n){
            cout<<t;
        }
    }
    else if(t==10 && n!=1){
        cout<<"1";
        loop(i,0,n-1){
            cout<<"0";
        }
    }
    else{
        cout<<"-1";
    }
    return 0;
}