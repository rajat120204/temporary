#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loop1(i,x,n) for(lli i=x;i<=n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;

int main()
{
 time
    test{
        lli n;
        cin>>n;
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        int c1=1;
        loop(i,0,n){
            v1.push_back(c1);
            c1++;
        }
        
        if(v1.size()==2){
            cout<<"2 1"<<endl;
        }
        else if(v1.size()==3){
            cout<<"-1"<<endl;
        }
        else{
            if(v1.size()%2==0){
               int c2=n/2;
               int c3=(n/2)+1;
               loop(i,0,n/2){
                v2.push_back(c2);
                c2--;
                v3.push_back(c3);
                c3++;
               }
               loop(i,0,n/2){
                   cout<<v3[i]<<" ";
               }
               loop(i,0,n/2){
                   cout<<v2[i]<<" ";
               }
               cout<<endl;
            }
            else{
                int c2=(n-1)/2;
               int c3=(n+1)/2;
               loop(i,0,(n-1)/2){
                v2.push_back(c2);
                c2--;
               }
               loop(i,0,(n+1)/2){
                v3.push_back(c3);
                c3++;
               }
               loop(i,0,(n+1)/2){
                   cout<<v3[i]<<" ";
               }
               loop(i,0,(n-1)/2){
                   cout<<v2[i]<<" ";
               }
               cout<<endl;
            }
        }
    }
    return 0;
}