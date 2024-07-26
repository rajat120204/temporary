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
        lli a[n];
        loop(i,0,n){
            cin>>a[i];
        }
        lli n1,n2;
        loop(i,0,n){
            if(a[i]==1){
                n1=i;
                break;
            }
        }
        loopr(i,0,n){
            if(a[i]==1){
                n2=i;
                break;
            }
        }
        lli count=0;
        loop(i,n1,n2){
            if(a[i]==0){
                count++;
            }
        }
        cout<<count<<endl;
      }
    return 0;
}