#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    lli count=0;
    for(lli i=1; i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}