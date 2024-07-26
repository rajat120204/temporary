#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int s, t;
    cin>>s>>t;
    bool check=0;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        if(s>x){
            s+=y;
            check=1;
            continue;
        }
    }
    if(check==1){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}