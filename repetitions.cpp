#include <bits/stdc++.h>
using namespace std;

// ATTCGGGAGGTATA

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = 1;
    int maxx = 1;
    int x = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] != x)
        {
            maxx = 0;
            s[i] = x;
        }
        count++;
        maxx = max(count, maxx);
    }
    cout << maxx << endl;
    // return 0;
}