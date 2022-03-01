M = 1234567891
R = 31
result = 0

l = int(input())
arr = input()

for i in range(len(arr)):
  result += (ord(arr[i])-96) * (31 ** i)
  
print(result % M)