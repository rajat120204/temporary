#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define trav(a,x) for (auto& a : x)
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
#define vcp vector<pair<lli,lli>>
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
        lli left=0, right=n-1;
        lli i1=0, i2=0;
        while(left<=right){
            if(left==right){
                i2++;
                break;
            }
            if(s[left]==s[right]){
                i2+=2;
            }
            if(s[left]!=s[right]){
                i1++;
                i2++;
            }
            left++;
            right--;
        }
        vector<char> t(n+1, '0');
        
        if(n%2){
            loop(i,i1,i2+1){
                t[i]='1';
            }
        }
        else{
            for(lli i=i1; i<=i2; i+=2){
                t[i]='1';
            }
        }
        trav(it,t){
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}