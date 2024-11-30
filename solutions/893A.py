t=int(input())

z=True
players = [1,2]
waiting = 3
for _ in range(t):
    
    k=int(input())
    
    z = players.copy()

    players.append(waiting)
    if k not in z:
        print("NO")
        z=False
        break
    else:
        z.remove(k)
        players.remove(z[0])

    waiting=z[0]

  

if z:
    print("YES")
