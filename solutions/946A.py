a = input()

pos = []

neg = []

b = list(map(int,input().split()))

for i in b:
    if i>0:
        pos.append(i)
    else:
        neg.append(i)
        
print(sum(pos)-sum(neg))