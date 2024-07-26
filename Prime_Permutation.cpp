#include <bits/stdc++.h>
#define lli long long int
#define test  \
    lli t;    \
    cin >> t; \
    while (t--)
#define loop(i, x, n) for (lli i = x; i < n; i++)
#define loopr(i, x, n) for (lli i = n - 1; i >= x; i--)
#define time                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);                   \
    cout.setf(ios::fixed);            \
    cout.setf(ios::showpoint);
#define trav(a, x) for (auto &a : x)
#define pb push_back
#define eb emplace_back
#define vlli vector<lli>
#define vc vector<char>
#define vs vector<string>
#define mll map<lli, lli>
#define mcc map<char, char>
#define mss map<string, string>
#define mls map<lli, string>
#define msl map<string, lli>
#define slli set<lli>
#define vcp vector<pair<lli, lli>>
#define sc set<char>
#define ss set<string>
using namespace std;

void fun6(vector<lli> &v, int start, int end)
{
    vector<lli> temp;

    for (int i = start + 3; i <= end; i++)
    {
        temp.push_back(v[i]);
    }

    for (int i = start; i < start + 3; i++)
    {
        temp.push_back(v[i]);
    }

    for (int i = start; i <= end; i++)
    {
        v[i] = temp[i - start];
    }
}

void fun5(vector<lli> &v, int start, int end)
{
    vector<lli> temp;

    for (int i = start + 3; i <= end; i++)
    {
        temp.push_back(v[i]);
    }

    for (int i = start; i <= start + 2; i++)
    {
        temp.push_back(v[i]);
    }

    for (int i = start; i <= end; i++)
    {
        v[i] = temp[i - start];
    }
}

void fun4(vector<lli> &v, int start, int end)
{
    vector<lli> temp;

    for (int i = start + 2; i <= end; i++)
    {
        temp.push_back(v[i]);
    }

    for (int i = start; i < start + 2; i++)
    {
        temp.push_back(v[i]);
    }

    // int x=0;
    for (int i = start; i <= end; i++)
    {
        v[i] = temp[i - start];
    }
}

void fun7(vector<lli> &v, int start, int end)
{
    vector<lli> temp;

    for (int i = start + 2; i <= end; i++)
    {
        temp.push_back(v[i]);
    }

    for (int i = start; i < start + 2; i++)
    {
        temp.push_back(v[i]);
    }

    for (int i = start; i <= end; i++)
    {
        v[i] = temp[i - start];
    }
}

int main()
{
    time
        test
    {
        lli n;
        cin >> n;

        if (n == 1 || n == 2 || n == 3)
        {
            cout << -1 << endl;
            continue;
        }

        vector<lli> v;

        for (int i = 0; i < n; i++)
        {
            v.push_back(i + 1);
        }

        if (n == 4)
        {
            fun4(v, 0, 3);
            trav(i, v) cout << i << " ";
            cout << endl;
            continue;
        }

        if (n == 5)
        {
            fun5(v, 0, 4);
            trav(i, v) cout << i << " ";
            cout << endl;
            continue;
        }

        if (n == 6)
        {
            fun6(v, 0, 5);
            trav(i, v) cout << i << " ";
            cout << endl;
            continue;
        }

        if (n == 7)
        {
            fun7(v, 0, 6);
            trav(i, v) cout << i << " ";
            cout << endl;
            continue;
        }

        else
        {
            if (n % 5 == 0)
            {
                for (int i = 0; i < n; i = i + 5)
                {
                    fun5(v, i, i + 4);
                }

                trav(i, v) cout << i << " ";
                cout << endl;
                continue;
            }
            if (n % 5 == 1)
            {

                for (int i = 0; i < n - 6; i = i + 5)
                {
                    fun5(v, i, i + 4);
                }

                fun6(v, n - 6, n - 1);
                trav(i, v) cout << i << " ";
                cout << endl;
                continue;
            }
            if (n % 5 == 2)
            {
                for (int i = 0; i < n - 7; i = i + 5)
                {
                    fun5(v, i, i + 4);
                }

                fun7(v, n - 7, n - 1);
                trav(i, v) cout << i << " ";
                cout << endl;
                continue;
            }
            if (n % 5 == 3)
            {
                for (int i = 0; i < n - 8; i = i + 5)
                {
                    fun5(v, i, i + 4);
                }

                fun4(v, n - 8, n - 5);
                fun4(v, n - 4, n - 1);

                trav(i, v) cout << i << " ";
                cout << endl;
                continue;
            }
            if (n % 5 == 4)
            {
                for (int i = 0; i < n - 4; i = i + 5)
                {
                    fun5(v, i, i + 4);
                }

                fun4(v, n - 4, n - 1);
                trav(i, v) cout << i << " ";
                cout << endl;
                continue;
            }
        }
    }
    return 0;
}