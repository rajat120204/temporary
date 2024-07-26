#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    char a[3];
    int n=0;
    test{
        for(int i=0; i<3; i++){
            cin>>a[i];
        }
        if(a[0]=='+'){
            ++n;
        }
        else if(a[2]=='+'){
            n++;
        }
        else if(a[0]=='-'){
            --n;
        }
        else if (a[2]=='-'){
            n--;
        }
        
    }
    cout<<n<<endl;
    return 0;
}