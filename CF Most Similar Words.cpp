#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    test{
        int n,m;
        cin>>n>>m;
        vector<string> s(n);
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        vector<int> answer;
        int count=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                for(int k=0; k<m; k++){
                    count=count+abs(s[i][k]-s[j][k]);
                }
                answer.push_back(count);
                count=0;
            }
        }
        int mini=answer[0];
        for(int i=0; i<answer.size(); i++){
            if(answer[i]<mini){
                mini=answer[i];
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}