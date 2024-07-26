#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        ll int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n, greater<int>());
        bool check=true;
        if(n==1){
            if(a[0]>1) check=false;
        }
        else{
            ll int x=a[0];A
            ll int y=a[1];
            if((x-y)>1) check=false;
        }
        cout<<(check?"YES\n":"NO\n");
    }
    return 0;
}