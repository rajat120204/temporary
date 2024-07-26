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
    lli n;
    cin>>n;
    lli i=0, a=0, b=0;
    while(n>0){
        i++;
        b=a+i;
        a=b;
        n-=b;
        if(n<0){
            i--;
        }
    }
    cout<<i<<endl;
    return 0;
}