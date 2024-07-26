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
    lli n;
    cin>>n;
    lli left[n], right[n];
    loop(i,0,n){
        cin>>left[i]>>right[i];
    }
    lli left_count_zero=0, left_count_one=0;
    lli right_count_zero=0, right_count_one=0;
    loop(i,0,n){
        if(left[i]==0){
            left_count_zero++;
        }
        if(left[i]==1){
            left_count_one++;
        }
        if(right[i]==0){
            right_count_zero++;
        }
        if(right[i]==1){
            right_count_one++;
        }
    }
    lli ans = min(left_count_zero,left_count_one)+min(right_count_one,right_count_zero);
    cout<<ans<<endl;
    return 0;
}