t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    ans = max(0, n - 2 * k)
    print(ans)


4
abbbcccdefghij
1mnnnnnopqrstuvwxyzzz
klmnnnnnopqrstuvwxy
abbbcccdefghijjjjj



2
abbbcccdefghij
lmnnnnnopqrstuvwxyzzz



4
abbbcccdefghij
1mnnnnnopqrstuvwxyzzz
klmnnnnnopqrstuvwxy
aabbbcccdefghijjjjj
