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
        lli m,n;
        cin>>m>>n;
        if(m==1 || n==1){
            cout<<m<<" "<<n<<endl;
        }
        else if(m<=3 && n<=3){
            cout<<"2"<<" "<<"2"<<endl;
        }
        else{
            cout<<m<<" "<<n<<endl;
        }
    }
    return 0;
}