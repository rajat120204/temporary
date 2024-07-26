#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define pb push_back
#define eb emplace_back
using namespace std;

int main()
{
 time
    lli n,x;
    cin>>n>>x;
    if(x==1){
        cout<<"1"<<endl;
    }
    else if(n>=x){
        lli count=0;
        for(lli i=2; i<=x/2; i++){
            if(x%i==0){
                count++;
            }
        }
       
        cout<<count+2<<endl;
    }
    else{
        lli count=0;
        for(lli i=2; i<=n; i++){
            if(x%i==0 && (x/i)<=n){
                count++;
            }
        }

        cout<<count<<endl;
    }
   
    return 0;
}