#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    test{
        lli arr[5];
        loop(i,0,5){
            cin>>arr[i];
        }
        if(arr[3]>=arr[0]){
            arr[3]=arr[3]-arr[0];
            arr[2]=arr[2]-arr[3];
            if(arr[2]<0){
                cout<<"NO"<<endl;
                continue;
            }
        }
        if(arr[4]>=arr[1]){
            arr[4]=arr[4]-arr[1];
            arr[2]=arr[2]-arr[4];
            if(arr[2]<0){
                cout<<"NO"<<endl;
                continue;
            }
        }
        cout<<"YES"<<endl;
        
        
    }
    return 0;
}