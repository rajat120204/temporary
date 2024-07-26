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
    lli sum=0;
    loop(i,0,n){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    lli sum1=0;
    lli count=0;
    loopr(i,0,n){
        sum1+=a[i];
        count++;
        if(sum1>(sum/2)){
            break;
        }
    }
    cout<<count<<endl;
    

    return 0;
}