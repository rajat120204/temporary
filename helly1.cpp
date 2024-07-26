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
string str;
lli count=0;
cin>>str;
for(int i=0;i<str.length()-1;i++)
{
    if(str[i]==str[i+1])
    {
        count++;
        
    }
    if(str[i]!=str[i+1])
        {
            count=0;
        }
}
if(count>=7)
        {
            cout<<"YES";
        }
        else{ cout<<"NO";}

    return 0;
}