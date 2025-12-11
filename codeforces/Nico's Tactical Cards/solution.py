t = int(input())


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    k = [0, 0]
    for i in range(n):
        ka = k[0]
        ki = k[1]
        k[0] = max(ka - a[i], ki - a[i], b[i] - ka, b[i] - ki)
        k[1] = min(ka - a[i], ki - a[i], b[i] - ka, b[i] - ki)

    print(k[0])


for _ in range(t):
    solve()
