#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n,k;
    cin>>n>>k;
    loop(i,0,k){
        if(n%10==0){
            n/=10;
        }
        else{
            n--;
        }
    }
    cout<<n<<endl;
    return 0;
}