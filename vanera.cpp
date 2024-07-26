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
int groupStudents(vector<int> levels, int maxSpread){
    int size=levels.size();
    sort(levels.begin(), level.end());
    int ans=1;
    int prev=levels[0];
    for(int i=0; i<size-1; i++){
        if((levels[i]-prev)>maxSpread){
            prev=levels[i];
            ans++;
        }
    }
    return ans;
}
int main()
{
 time
    vector<int> levels;
    int size;
    cin>>size;
    loop(i,0,size){

    }
    return 0;
}