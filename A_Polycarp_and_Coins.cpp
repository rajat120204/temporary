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
    test{
        lli n;
        cin>>n;
        lli c1=n/3;
        lli c2=n/3;
        if(n-c1-2*c2==1){
            c1++;
        }
        if(n-c1-2*c2==2){
            c2++;
        }
        cout<<c1<<" "<<c2<<endl;
    }
    return 0;
}