from collections import Counter

check = 0
name = []
count =[]
result = []

n = int(input())

for i in range(n):
  name = input()
  count.append(name[0])

  name_count = Counter(count)
for i in name_count:
  if name_count[i] >= 5:
    result.append(i)

if len(result) > 0:
  print(''.join(sorted(result)))
else:
  print("PREDAJA")