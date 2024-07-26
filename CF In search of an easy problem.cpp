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
    lli a[n];
    bool check=true;
    loop(i,0,n){
        cin>>a[i];
        if(a[i]==1){
            check=false;
            break;
        }
    }
    if(check==true){
        cout<<"EASY";
    }
    else cout<<"HARD";
    return 0;
}