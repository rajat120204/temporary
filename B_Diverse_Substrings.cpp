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
    test{
        int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int fr[10] = {0},distinct = 0 , maxFreq = 0;
        for (int j = i; j < n && (++fr[s[j]-'0'])<=10; j++)
        {
            maxFreq = max(maxFreq,fr[s[j]-'0']);
            if(fr[s[j]-'0']==1) distinct++;
            if(distinct>=maxFreq) count++;
        }
    }
    cout<<count<<endl;
    
    }
    return 0;
}