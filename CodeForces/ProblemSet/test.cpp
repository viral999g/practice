#include <bits/stdc++.h>
using namespace std;
int i, n, s, u, a[105];
main()
{
    for (cin >> n; i < n; s += a[i++])
        cin >> a[i];
    for (sort(a, a + n); u * 2 <= s;)
        u += a[--i];
    cout << n - i;
}