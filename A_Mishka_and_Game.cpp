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
    lli m=0,c=0;
    test{
        lli a,b;
        cin>>a>>b;
        if(a>b){
            m++;
        }
        if(a<b){
            c++;
        }
    }
    if(m>c){
        cout<<"Mishka"<<endl;
    }
    else if(m<c){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}