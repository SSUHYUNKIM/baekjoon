answer = [ 1, 2, 3 ]
n = int(input())
for i in range(n):
  x, y = map(int,input().split())
  temp = answer[x - 1];
  answer[x - 1] = answer[y - 1];
  answer[y - 1] = temp;
for i in range(3):
  if (answer[i] == 1):
    print(i+1)
