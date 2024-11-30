def solve(n, m):
    while n != 0 and m != 0:
        if n >= 2 * m:
            n %= 2 * m
        elif m >= 2 * n:
            m %= 2 * n
        else:
            break
    return n, m


n, m = map(int, input().split())

result = solve(n, m)
print(result[0], result[1])