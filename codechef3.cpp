#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b, x, y, answer=2;
    cin>>a>>b>>x>>y;
    if(x==a || x==b){
        answer--;
    }
    if(y==a || y==b){
        answer--;
    }
    cout<<answer<<endl;
    }
    
    return 0;
}