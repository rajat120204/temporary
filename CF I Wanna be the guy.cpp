#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n;
    cin>>n;
    lli a[n+1];
    for(lli i=1; i<=n; i++){
         a[i]=i;
    }
    set<lli> s;
    for(lli i=1; i<=n; i++){
        s.insert(a[i]);
    }
    lli p;
    cin>>p;
    lli x[p];
    loop(i,0,p){
        cin>>x[i];
    }
    lli q;
    cin>>q;
    lli y[q];
    loop(i,0,q){
        cin>>y[i];
    }
    set<lli> xy;
    loop(i,0,p){
        xy.insert(x[i]);
    }
    loop(i,0,q){
        xy.insert(y[i]);
    }
    
    bool check=true;
    if(s!=xy){
        check=false;
    }
    if(check==true){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}