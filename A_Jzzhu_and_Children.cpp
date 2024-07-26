#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define pb push_back
#define eb emplace_back
#define vlli vector<lli>
#define vc vector<char>
#define vs vector<string>
#define mll map<lli,lli>
#define mcc map<char,char>
#define mss map<string,string>
#define mls map<lli,string>
#define msl map<string,lli>
#define slli set<lli>
#define sc set<char>
#define ss set<string>
using namespace std;

int main()
{
 time
    int n,k;
    cin>>n>>k;
    int a,j=n,o=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a/k != 0 && a!=k)
        {
            if(((a%k==0) ? a/k : (a/k + 1)) >=o)
            {
                j=i+1;
                if(a%k==0) o = a/k;
                else o = a/k + 1;
            }
        }
    }
    cout<<j<<endl;
    return 0;
}