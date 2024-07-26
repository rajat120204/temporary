#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define pb push_back
#define eb emplace_back
using namespace std;

int main()
{
 time
    test{
        char a[8][8];
        loop(i,0,8){
            loop(j,0,8){
                cin>>a[i][j];
            }
        }
        lli count=0;
        bool check=false;
        loop(i,0,8){
            loop(j,0,8){
                if(a[i][j]=='R'){
                    count++;
                }
                if(count==8){
                    check=true;
                    break;
                }
            }
            count=0;
        }
        if(check){
            cout<<"R"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
    return 0;
}