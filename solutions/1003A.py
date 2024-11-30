from collections import Counter
 
n = int(input()) 
a = list(map(int, input().split())) 
 
count = Counter(a)
 
r = max(count.values())
 
print(r)