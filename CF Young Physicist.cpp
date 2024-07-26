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
    lli a[n][3];
    lli sum1=0;
    lli sum2=0;
    lli sum3=0;
    loop(i,0,n){
        loop(j,0,3){
            cin>>a[i][j];
        }
    }
    loop(i,0,n){
        loop(j,0,3){
            sum1+=a[i][0];
            sum2+=a[i][1];
            sum3+=a[i][2];
        }
    }
    if(sum1==0 && sum2==0 && sum3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}