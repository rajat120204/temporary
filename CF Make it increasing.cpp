#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    test{
        lli n;
        cin>>n;
        lli a[n];
        loop(i,0,n){
            cin>>a[i];
        }
        bool check=false;
        lli count=0;
        loop(i,0,n){
            if(a[i]>a[i-1]){
               check=true;
            }
            else if(a[i]<a[i-1]){
                while(a[i]<a[i-1]){
                    a[i-1]/=2;
                    count++;
                }
            }
        }
    }
    return 0;
}