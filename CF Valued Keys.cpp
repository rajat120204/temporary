#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    string str="";
    loop(i, 0, s1.length()){
        
        if(s1[i]==s2[i]){
            if(s1[i]=='z'){
                str+=s1[i];
            }
            else{
                str+=s1[i]+1;
            }
        }
        else if(s1[i]>s2[i]){
            str+=s2[i];
        }
        else{
            cout<<"-1"<<endl;
            exit(main());
        }
    }
    cout<<str<<endl;
    return 0;
}