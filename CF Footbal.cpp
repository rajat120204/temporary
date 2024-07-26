#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    string s;
    cin>>s;
    lli cz=0, co=0;
    bool check=0;
    loop(i,0,s.length()){
        if(s[i]=='1'){
            co++;
            cz=0;
        }
        else{
            cz++;
            co=0;
        }
        if(cz==7 || co==7){
            check=1;
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}