#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;

int main()
{
 time
    string s;
    cin>>s;
    string s1;
    loop(i,0,s.length()){
        if(s[i]=='.'){
            s1+='0';
        }
        if(s[i]=='-' && s[i+1]=='.'){
            s1+='1';
            i++;
        }
        if(s[i]=='-' && s[i+1]=='-'){
            s1+='2';
            i++;
        }
    }
    cout<<s1<<endl;
    return 0;
}