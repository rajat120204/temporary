#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    char a[3];
    int n=0;
    while(t--){
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