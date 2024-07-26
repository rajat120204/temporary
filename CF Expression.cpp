#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli arr[3];
    loop(i,0,3){
        cin>>arr[i];
    }
    lli a = arr[0] + arr[1] + arr[2];
    lli b = (arr[0] * arr[1]) + arr[2];
    lli c = arr[0] + (arr[1] * arr[2]);
    lli d = (arr[0] + arr[1]) * arr[2];
    lli e = arr[0] * (arr[1] + arr[2]);
    lli f = arr[0] * arr[1] * arr[2];
    
    lli arr1[6];
    arr1[0]=a;
    arr1[1]=b;
    arr1[2]=c;
    arr1[3]=d;
    arr1[4]=e;
    arr1[5]=f;
    sort(arr1 , arr1 + 6);
    cout<<arr1[5]<<endl;
    return 0;
}