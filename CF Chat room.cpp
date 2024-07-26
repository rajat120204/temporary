#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    string str;
    cin>>str;
    string s1="hello";
    lli n=0;
    loop(i,0,str.length()){
        if(n<5 && str[i]==s1[n]){
            n++;
        }
    }
    if(n==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}