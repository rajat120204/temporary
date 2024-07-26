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
    char s;
    for(lli i=0; i<str.length(); i+=2){
        for(lli j=i+2; j<str.length(); j+=2){
            if(str[i]>str[j]){
                s=str[i];
                str[i]=str[j];
                str[j]=s;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}