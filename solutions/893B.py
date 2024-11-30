def res(n):
    numbers = []
    k = 1
    while True:
        number = (2**k - 1) * 2**(k - 1)
        if number > n:
            break
        numbers.append(number)
        k += 1
    for num in reversed(numbers):
        if n % num == 0:
            return num

n = int(input())
print(res(n))