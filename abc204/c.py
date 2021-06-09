from collections import deque

n, m  = map(int, input().split())

#なるほどね
#これでnこの二次元配列ができると考えられる。
c = [[] for i in range(n)]

for i in range(m):
    a, b = map(int, input().split())
    a -= 1
    b -= 1
    c[a].append(b)

#答え
ans = 0

#見た配列
for nv in range(n):
    seen = [0 for _ in range(n)]
    q = deque()
    seen[nv] = 1
    ans += 1
    q.append(nv)
    while(q):
        temp = q.popleft()
        for i in c[temp]:
            if (seen[i]):
                continue
            q.append(i)
            seen[i] = 1
            ans += 1

print(ans)
            



