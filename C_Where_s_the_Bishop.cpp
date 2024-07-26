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
        char a[8][8];
        lli m=0, n=0;
        loop(i,0,8){
            loop(j,0,8){
                cin>>a[i][j];
            }
        }
         loop(i,0,6){
            loop(j,0,6){
                if(a[i][j]=='#' && a[i][j+1]=='.' && a[i][j+2]=='#' && a[i+1][j]=='.' && a[i+1][j+1]=='#' && a[i+1][j+2]=='.' && a[i+2][j]=='#' && a[i+2][j+1]=='.' && a[i+2][j+2]=='#'){
                   m=i;
                   n=j;
                }
            }
        }0
        cout<<m+2<<" "<<n+2<<endl;
    }
    return 0;
}