a=int(input())


b=input()

c={}

i=0
max_i = 0
while i!=a-1:
    trim_str = b[i]+b[i+1]
    if c.get(trim_str) is not None:
        c[trim_str]+=1
        max_i = max(max_i,c[trim_str])
    else:
        c[trim_str] = 1
    i+=1

o=True
for i,y in c.items():
    if y==max_i:
        print(i)
        o=False
        break
if o:
    print(min(c))