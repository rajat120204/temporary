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
        lli a[4];
        lli count=0;
        loop(i,0,4){
            cin>>a[i];
        }
        loop(i,0,4){
            if(a[i]>a[0]){
                count++;
            }
        }
        
        cout<<count<<endl;
    }
    return 0;
}