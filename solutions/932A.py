a = input()

if a==a[::-1]:
    print(a)
else:
    mid = len(a)//2
    if len(a) == 2:
        print(a+a[0])
    else:
        print(a+a[::-1])