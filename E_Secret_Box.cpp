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
        lli x,y,z,k;
        cin>>x>>y>>z>>k;
        lli a[3];
        a[0]=x;
        a[1]=y;
        a[2]=z;
        sort(a,a+3);
        lli side1=-1, side2=-1, side3=-1, k1=k;
        lli ans=0;
        loop(i,1,a[0]+1){   
            k1=k;
            if(k1%i==0){
                side1=i;
                lli k2=k1/side1;
                loop(j,1,a[1]+1){
                    if(k2%j==0){
                        side2=j;
                        lli k3=k2/side2;
                        loop(r,1,a[2]+1){
                            if(k3%r==0){
                                side3=r;
                                if(side1*side2*side3==k){
                                    lli a1=a[0]-side1+1;
                                    lli a2=a[1]-side2+1;
                                    lli a3=a[2]-side3+1;
                                    ans=max(ans,a1*a2*a3);
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}