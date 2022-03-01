result = 0
temp = 0

n, m = map(int,input().split())
arr = list(map(int, input().split()))

for i in range(1, n):
  for j in range(i+1, n):
    for k in range(j+1, n):
      temp = arr[i] + arr[j] + arr[k];
      if temp > result and temp <= m:
        result = temp

print(result)