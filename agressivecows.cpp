//aggressive Cows problem
#include <bits/stdc++.h>
using namespace std;
bool istrue(int mid, int n, int a[], int tcows)
{
    int start = a[0];
    int cows = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] - start >= mid)
        {
            cows++;
            start = a[i];
        }
        if (cows >= tcows)
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int l = 1, h = a[n - 1] - a[0];

        while (l <= h)
        {
            int mid = (h + l) / 2;

            if (istrue(mid, n, a, c) == true)
            {
                l = mid + 1;
            }
            else
                h = mid - 1;
        }

        cout << h << endl;
    }

    return 0;
}
