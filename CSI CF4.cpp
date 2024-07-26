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
        bool check=1;
        if(n%2!=0){
            cout<<"YES"<<endl;
            continue;
        }
        n/=2;
        while(n>1){
            if(n%2!=0){
                cout<<"YES"<<endl;
                check=0;
                break;
            }
            n/=2;
        }
        if(check){
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}