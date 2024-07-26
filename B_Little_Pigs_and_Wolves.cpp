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
#define sc set<char>
#define ss set<string>
using namespace std;

int main()
{
 time
    lli n,m;
    cin>>n>>m;
    char a[n][m];
    loop(i,0,n){
        loop(j,0,m){
            cin>>a[i][j];
        }
    }
    lli count=0;
    loop(i,0,n){
        if(a[i][0]=='W'){
            if(i==0){
                if(a[0][1]=='P'){
                    count++;
                    a[i][0]='R';
                    a[0][1]='R';
                }
                else if(a[1][0]=='P'){
                    count++;
                    a[i][0]='R';
                    a[1][0]='R';
                }
            }
            else if(i==n-1){
                if(a[n-2][0]=='P'){
                    count++;
                    a[i][0]='R';
                    a[n-2][0]='R';
                }
                else if(a[n-1][1]=='P'){
                    count++;
                    a[i][0]='R';
                    a[n-1][1]='R';
                }
            }
            else{
                if(a[i-1][0]=='P'){
                    count++;
                    a[i][0]='R';
                    a[i-1][0]='R';
                }
                else if(a[i][1]=='P'){
                    count++;
                    a[i][0]='R';
                    a[i][1]='R';
                }
                else if(a[i+1][0]=='P'){
                    count++;
                    a[i][0]=='R';
                    a[i+1][0]=='R';
                }
            }
        }
        
        if(a[i][m-1]=='W'){
            if(i==0){
                if(a[0][m-2]=='P'){
                    count++;
                    a[i][m-1]='R';
                    a[0][m-1]='R';
                }
                else if(a[1][m-1]=='P'){
                    count++;
                    a[i][m-1]='R';
                    a[1][m-1]='R';
                }
            }
            else if(i==n-1){
                if(a[n-2][m-1]=='P'){
                    count++;
                    a[i][m-1]='R';
                    a[n-2][m-1]='R';
                }
                else if(a[n-1][m-2]=='P'){
                    count++;
                    a[i][m-1]='R';
                    a[n-1][m-2]='R';
                }
            }
            else{
                if(a[i-1][m-1]=='P'){
                    count++;
                    a[i][m-1]='R';
                    a[i-1][m-1]='R';
                }
                else if(a[i+1][m-1]=='P'){
                    count++;
                    a[i][m-1]='R';
                    a[i+1][m-1]='R';
                }
                else if(a[i][m-2]=='P'){
                    count++;
                    a[i][m-1]='R';
                    a[i][m-2]='R';
                }
            }
        }
    }

    loop(j,1,m-1){
        if(a[0][j]=='W'){
            if(a[0][j-1]=='P'){
                count++;
                a[0][j]='R';
                a[0][j-1]='R';
            }
            else if(a[0][j+1]=='P'){
                count++;
                a[0][j]='R';
                a[0][j+1]='R';
            }
            else if(a[1][j]=='P'){
                count++;
                a[0][j]='R';
                a[1][j]='R';
            }
        }
        if(a[n-1][j]=='W'){
            if(a[n-1][j-1]=='P'){
                count++;
                a[n-1][j]='R';
                a[n-1][j-1]='R';
            }
            else if(a[n-1][j+1]=='P'){
                count++;
                a[n-1][j]='R';
                a[n-1][j+1]='R';
            }
            else if(a[n-2][j]=='P'){
                count++;
                a[n-1][j]='R';
                a[n-2][j]='R';
            }
        }
    }

    loop(i,1,n-1){
        loop(j,1,m-1){
            if(a[i][j]=='W'){
                if(a[i-1][j]=='P'){
                    count++;
                    a[i][j]='R';
                    a[i-1][j]='R';
                }
                else if(a[i+1][j]=='P'){
                    count++;
                    a[i][j]='R';
                    a[i+1][j]='R';
                }
                else if(a[i][j+1]=='P'){
                    count++;
                    a[i][j]='R';
                    a[i][j+1]='R';
                }
                else if(a[i][j-1]=='P'){
                    count++;
                    a[i][j]='R';
                    a[i][j-1]='R';
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}