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
        float a,b,c,ab,bc,ac;
        cin>>a>>b>>c;
        ab=(a+b)/2;
        bc=(b+c)/2;
        ac=(a+c)/2;
        if(ab<35 || bc<35 || ac<35){
            cout<<"FAIL"<<endl;
        }
        else{
            cout<<"PASS"<<endl;
        }
    }
    return 0;
}