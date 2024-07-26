#include <bits/stdc++.h>
#define int long long
#define float long double
using namespace std;
#define pb push_back
#define pi (3.141592653589)
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))

string reverseStr(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}
void solve()
{
    string s;
    int x;
    cin >> x >> s;
    int n=s.length();
    if (s[0] > s[n - 1])
    {
        string temp = reverseStr(s);
        cout << temp << s << endl;
        return;
    }
    else if (s[0] < s[n - 1])
    {
        cout << s << endl;
        return;
    }
    else
    {
        for (int i = 0; i < n/2; i++)
        {
            if (s[i] < s[n - i - 1])
            {
                cout << s << endl;
                return;
            }
            else if (s[i] > s[n - i - 1])
            {
                
                string temp = reverseStr(s);
                cout << temp << s << endl;
                return;
            }
        }
        cout<<s<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
