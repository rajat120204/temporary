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

lli n,m,ans=0;
lli vis[1001][1001];
char grid[1001][1001];
lli dx[4]={0,0,1,-1};
lli dy[4]={1,-1,0,0};

bool isValid(lli y, lli x){
    if(y<0){
        return false;
    }
    if(x<0){
        return false;
    }
    if(y>=n){
        return false;
    }
    if(x>=m){
        return false;
    }
    if(grid[y][x]=='#'){
        return false;
    }
    return true;
}

void dfs(lli y, lli x){
    vis[y][x]=1;
    loop(i,0,4){
        lli newx=x+dx[i];
        lli newy=y+dy[i];
        if(isValid(newy, newx)){
            if(!vis[newy][newx]){
                dfs(newy,newx);
            }
        }
    }
}

int main()
{
 time
    cin>>n>>m;
    loop(i,0,n){
        loop(j,0,m){
            cin>>grid[i][j];
            vis[i][j]=0;
        }
    }
    loop(i,0,n){
        loop(j,0,m){
            if(grid[i][j]=='.' && !vis[i][j]){
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}