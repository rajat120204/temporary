#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }
    if(count==7 || count==4){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}