#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    test{
        lli x,y;
        cin>>x>>y;
        if(y%x==0 && y/x>0){
            cout<<"1"<<" "<<y/x<<endl;
        }
        else{
            cout<<"0"<<" "<<"0"<<endl;
        }
    }
    return 0;
}