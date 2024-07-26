#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;

int main()
{
 time
    lli n;
    cin>>n;
    vector<lli> t1,t2,t3;
    lli m;
    for(lli i=1; i<=n; i++){
        cin>>m;
        if(m==1){
            t1.push_back(i);
        }
        else if(m==2){
            t2.push_back(i);
        }
        else{
            t3.push_back(i);
        }
    }
    lli min_size=min(min(t1.size(),t2.size()),t3.size());
    cout<<min_size<<endl;
    for(lli i=0; i<min_size; i++){
        cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
    }
    return 0;
}