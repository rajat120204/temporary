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
        lli a,b;
        cin>>a>>b;
        if(a>b){
            swap(a,b);
        }
        if(b>a){
            if((b-a)%10==0){
                cout<<(b-a)/10<<endl;
            }
            else{
                cout<<((b-a)/10)+1<<endl;
            }
        }
        else if(a==b){
            cout<<"0"<<endl;
        }
    }
    return 0;
}