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
        lli n,m;
        cin>>n>>m;
        char c[n][m];
        loop(i,0,n){
            loop(j,0,m){
                cin>>c[i][j];
            }
        }
        lli maxct=0,i1=-1,j1=-1;
        loop(i,0,n){
            lli count=0,j2=-1;
            loop(j,0,m){
                if(c[i][j]=='#'){
                    count++;
                    if(j2==-1) j2=j;
                }
            }
            if(count > maxct)
            {
                maxct = count;
                i1 = i;
                j1 = j2;
            }
        }
        maxct/=2;
        maxct++;
        i1++;
        j1+=maxct;
        cout<<i1<<" "<<j1<<endl;

    }
    return 0;
}