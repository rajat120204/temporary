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
        lli n,m,x;
        cin>>n>>m>>x;
        set<lli> st;
        st.insert(x);
        lli r;
        char c;
        loop(i,0,m){
            set<lli> s;
            cin>>r>>c;
            if(c=='1'){
                trav(it,st){
                    lli temp=(it-r+n)%n;
                    if(temp==0){
                        temp=n;
                    }
                    s.insert(temp);
                }
            }
            else if(c=='0'){
                trav(it,st){
                    lli temp=(it+r)%n;
                    if(temp==0){
                        temp=n;
                    }
                    s.insert(temp);
                }
            }
            else{
                trav(it,st){
                    lli temp=(it-r+n)%n;
                    if(temp==0){
                        temp=n;
                    }
                    s.insert(temp);
                    temp=(it+r)%n;
                    if(temp==0){
                        temp=n;
                    }
                    s.insert(temp);
                }
            }
            st=s;
        }
        cout<<st.size()<<endl;
        trav(it,st){
            cout<<it<<" ";
        }
        cout<<endl;

    }
    return 0;
}