#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli count=0;
    test{
        lli a,b;
        cin>>a>>b;
        
        if(abs(a-b)>=2){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}