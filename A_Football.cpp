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
    lli n;
    cin>>n;
    map<string,lli> m;
    string str, str1;
    lli max=0;
    while(n--){
        cin>>str;
        m[str]++;
        if(m[str]>max){
            max=m[str];
            str1=str;
        }
    }
    cout<<str1<<endl;
    return 0;
}