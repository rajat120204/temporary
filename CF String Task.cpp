#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        s[i]=tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y'){
            continue;
        }
        else{
            cout<<"."<<s[i];
        }
    }
    return 0;
}