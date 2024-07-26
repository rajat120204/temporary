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
        lli n;
        cin>>n;
        string s;
        cin>>s;
        lli count=0;
        lli i=0, j=n-1;
        while(i!=j){
            if(s[i]=='1' && s[j]=='0'){
                count++;
            }
            else if(s[i]=='0' && s[j]=='1'){
                count++;
            }
            else break;
            i++;j--;
        }
        if(n-2*count>0){
            cout<<n-2*count<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}