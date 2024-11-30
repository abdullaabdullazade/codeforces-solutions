def res():
    a=input()
    b=[]
    
    for _ in range(int(input())):
        s=input()
        b.append(s)
    if len(b)==1 and sorted(a)==sorted(b[0]):
        print("YES")
        return
    b*=2
    
    if a in b:
        print("YES")
        return
    for i in b:
        for j in b:
           if i[1]+j[0] == a:
              print("YES")
              return
    print('NO')

res()
        