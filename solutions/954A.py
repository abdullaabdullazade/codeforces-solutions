b = int(input())
a = input()

c = ""
i = 0

while i < b:
    if i < b - 1 and ((a[i] == 'R' and a[i + 1] == 'U') or (a[i] == 'U' and a[i + 1] == 'R')):
        c += 'D'
        i += 2
    else:
        c += a[i] 
        i += 1 

print(len(c)) 