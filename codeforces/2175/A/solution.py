t = int(input())


def solve():
    n = int(input())
    lst = list(map(int, input().split()))
    c = len(set(lst))
    while c not in lst:
        lst.append(c)
        c += 1

    print(c)


for _ in range(t):
    solve()