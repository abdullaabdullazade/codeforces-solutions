a,b=input().split()

c=[]

for i in range(len(a)):
    for j in range(len(b)):
        c.append(a[:i+1]+b[:j+1])
c.sort()
print(c[0])