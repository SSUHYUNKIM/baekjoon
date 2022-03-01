i = 1
count = 1
n = int(input())
if n == 1:
  print("1")
  quit()   
while(True):
  n = n - i;
  i = count*6;
  count = count + 1
  if i >= n:
    break
print(count)