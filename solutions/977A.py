a,b=map(int,input().split())

for i in range(b):
    a_str=str(a)
    if a_str[-1] == '0':
        
        a=int(a_str[0:-1])
    else: a-=1

print(a)