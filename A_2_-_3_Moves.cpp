// #include<bits/stdc++.h>
// #define lli long long int
// #define test lli t; cin>>t; while(t--)
// #define loop(i,x,n) for(lli i=x;i<n;i++)
// #define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
// #define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
// using namespace std;

// int main()
// {
//  time
//     test{
//         lli n;
//         cin>>n;
//         lli ans=0;
//         if(n==1){
//             ans=2;
//         }
//         else if(n==2 || n==3){
//             ans=1;
//         }
//         else{
//             if(n%3==0){
//                 ans=n/3;
//             }
//             else{
//                 // ans=(n/3)+1;
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
#define ll long long int
#include <bits/stdc++.h>
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;
int main()
{
    time
    ll n;
    cin>>n;
    ll a[n][2];
    ll sum[n]
    for (ll i=0;i<n;i++)
    {
        for (ll j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
        sum[i]=60*a[i][0]+a[i][1];
    }
    ll count=1;
    int hash[1440]={0};
    for (int i=0;i<n;i++)
    {
        hash[sum[i]]++;
    }
    sort(hash,hash+1440);
    cout<<hash[1439];

    

}