#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli a[4];
    int count=0;
    loop(i,0,4){
        cin>>a[i];
    }
    sort(a,a+4);
    loop(i,0,4){
        if(a[i]==a[i+1]){
          count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}