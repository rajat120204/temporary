#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n;
    cin>>n;
    string s;
    cin>>s;
    lli ca=0, cd=0;
    loop(i,0,n){
        if(s[i]=='A'){
            ca++;
        }
        else{
            cd++;
        }
    }
    if(ca>cd){
        cout<<"Anton"<<endl;
    }
    else if(cd>ca){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}