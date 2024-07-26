#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n;
    cin>>n;
    loop(i,0,n){
        if(i%2==0){
            cout<<"I hate ";
        }
        else{
            cout<<"I love ";
        }
        if(i!=(n-1)){
            cout<<"that ";
        }
        else{
            cout<<"it ";
        }
    }
    return 0;
}