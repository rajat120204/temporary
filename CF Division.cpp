#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    test{
        int x;
        cin>>x;
        if(x>=1900){
            cout<<"Division 1"<<endl;
        }
        else if(x>=1600 && x<=1899){
            cout<<"Division 2"<<endl;
        }
        else if(x>=1400 && x<=1599){
            cout<<"Division 3"<<endl;
        }
        else{
            cout<<"Division 4"<<endl;
        }
    }
    return 0;
}