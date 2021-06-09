ans = 0
n = int(input())
a = list(map(int, input().split()))

for i in a:
    ans += max(i-10, 0)
    #賢い...

print(ans)

