#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define trav(a,x) for (auto& a : x)
using namespace std;

int main()
{
 time
    test{
        int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        int x = a[i];
        string s;
        cin>>s;
        trav(i,s)
        {
            if(i=='U')
            {
                if(x==0) x =9;
                else x--;
            }else if(i=='D')
            {
                if(x==9) x = 0;
                else x++;
            }
        }
        cout<<x<<" ";
    }
    cout<<endl;
    }
    return 0;
}