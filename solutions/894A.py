a = input()

cnt = []

for i in range(len(a)):
    for j in range(i+1, len(a)):
        for k in range(j+1, len(a)):
            sub = a[i] + a[j] + a[k]
            cnt.append(sub)

print(cnt.count("QAQ"))