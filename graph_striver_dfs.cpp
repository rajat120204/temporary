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

void dfs(lli node, vector<lli> adj[], lli vis[], vector<int> &ls){
    vis[node]=1;
    ls.pb(node);
    //traverse the neighbours
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, adj, vis, ls);
        }
    }
}

vector<lli> dfsOfGraph(lli V, vector<lli> adj[]){
    lli vis[V]={0};
    lli start=0;
    vector<lli> ls;
    dfs(start, adj, vis, ls){
        return ls;
    }
}

int main()
{
 time
    
    return 0;
}