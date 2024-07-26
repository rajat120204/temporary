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
        lli n,k;
        cin>>n>>k;
        vlli v;
        loop(i,0,n){
            lli x;
            cin>>x;
            v.pb(x);
        }
        lli maxi=*max_element(v.begin(),v.end());
        lli ans=maxi;
        loop(i,0,n){
            lli count=0;
            loop(j,i,n){
                count+=(maxi-v[j]);
                if(v[j]==maxi){
                    lli diff=j-i;
                    lli diff1=((diff)*(diff+1))/2;
                    if((count+diff1)<=k){
                        ans=max(ans,maxi+diff);
                    }
                }
            }
        }
        loopr(i,1,n){
            lli j=i-1;
            lli curr=v[i];
            lli count=0;
            while(v[j]<=curr && j>=0){
                if(j>0){
                    
                }
                else
                {count+=(curr-v[j]+1);
                if(count>k){
                    break;
                }
                curr++;
                ans=max(ans,curr);
                j--;}
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}