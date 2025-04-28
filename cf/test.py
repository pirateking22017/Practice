def solve():
    n=int(input())
    a=list(map(int, input().split()))
    ans = sum(a)
    while True:
        if len(a)==1:
            ans=max(ans, a[0])
            break
        diffs=[]
        for i in range(len(a)-1):
            diffs.append(a[i+1]-a[i])
        if sum(diffs)<0:
            diffs=[-1*x for x in diffs]
        ans = max(ans, sum(diffs))
        a=diffs[::-1]
    print(ans)

for _ in range(int(input())):
    solve()