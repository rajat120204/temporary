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
    lli n,m;
    cin>>n>>m;
    char a[n][m];
    bool check=false;
    loop(i,0,n){
        loop(j,0,m){
            cin>>a[i][j];
            if(a[i][j]=='C' || a[i][j]=='Y' || a[i][j]=='M'){
                check=true;
                break;
            }
        }
    }
    if(check==true){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}