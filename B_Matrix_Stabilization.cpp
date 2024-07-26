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
#define mcl map<char,lli>
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
        lli a[n][m];
        loop(i,0,n){
            loop(j,0,m){
                cin>>a[i][j];
            }
        }
        loop(i,0,n){
            loop(j,0,m){
                lli maxi=INT64_MIN;
                if(i>0){
                    maxi=max(maxi,a[i-1][j]);
                }
                if(i<n-1){
                    maxi=max(maxi,a[i+1][j]);
                }
                if(j>0){
                    maxi=max(maxi,a[i][j-1]);
                }
                if(j<m-1){
                    maxi=max(maxi,a[i][j+1]);
                }
                a[i][j]=min(maxi,a[i][j]);
            }
        }
        loop(i,0,n){
            loop(j,0,m){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        //cout<<endl;
    }

    return 0;
}