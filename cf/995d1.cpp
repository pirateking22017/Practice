#include <stdio.h>
#include <stdlib.h>

#define ll long long

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

void solve()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        ll x, y;
        scanf("%d %lld %lld", &n, &x, &y);

        int a[n];
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }

        qsort(a, n, sizeof(int), compare);

        ll count = 0;
        ll minSum = sum - y;
        ll maxSum = sum - x;

        for (int i = 0; i < n - 1; i++)
        {
            int j = i + 1;

            while (j < n && (a[i] + a[j] <= maxSum))
            {
                if (a[i] + a[j] >= minSum)
                {
                    count++;
                }
                j++;
            }
        }

        printf("%lld\n", count);
    }
}

int main()
{
    solve();
    return 0;
}