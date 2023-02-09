lis = []

j = 0
i = 1

while (i <= 1000):
    lis.append(str(i))
    j = j + 1
    i = i + 1

# for i in range(0, len(lis)):
#     lis[i] = lis[i].split()

print(lis)


dig = ["2", "7", "9"]

# for i in lis:
#     if

count = 0

for i in range(0, len(lis)):
    if "2" in lis[i] and "7" in lis[i] and "9" in lis[i]:
        count = count + 1
        print(lis[i])

print(count)