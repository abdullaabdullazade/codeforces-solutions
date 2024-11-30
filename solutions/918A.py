def r(n):
    fib = [1, 1]
    while fib[-1] + fib[-2] <= n:
        fib.append(fib[-1] + fib[-2])

    name = []
    for i in range(1, n + 1):
        if i in fib:
            name.append('O')
        else:
            name.append('o')

    return ''.join(name)

n = int(input())
print(r(n))