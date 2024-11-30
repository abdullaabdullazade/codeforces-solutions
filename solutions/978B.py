n = int(input())
file_name = input()


res = 0

for i in range(len(file_name) - 2):
    if file_name[i] == 'x' and file_name[i + 1] == 'x' and file_name[i + 2] == 'x':
        res += 1  

print(res)