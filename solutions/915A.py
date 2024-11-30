a,b=map(int,input().split())

c = map(int,input().split())

d={}

for i in c:
    if b%i==0:
        d[i] = b//i

print(b//max(d))