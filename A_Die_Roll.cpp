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
    lli y,w;
    cin>>y>>w;
    lli num,den=6;
    lli m=max(y,w);
    num=6-m+1;
    if(num==0){
        num=0;
        den=1;
    }
    if(num==2){
        num=1;
        den=3;
    }
    if(num==3){
       num=1;
       den=2;
    }
    if(num==4){
        num=2;
        den=3;
    }
    if(num==6){
        num=1;
        den=1;
    }
    cout<<num<<"/"<<den<<endl;
    return 0;
}