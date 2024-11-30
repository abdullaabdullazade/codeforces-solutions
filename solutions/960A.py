a = input()

if a != "".join(sorted(a)) or 'a' not in a or 'b' not in a:
    print('NO')
else:
    cnt_a = a.count('a')
    cnt_b = a.count('b')
    cnt_c = a.count('c')

    if (cnt_c == cnt_a or cnt_c == cnt_b) and cnt_b > 0:
        print("YES")
    else:
        print("NO")