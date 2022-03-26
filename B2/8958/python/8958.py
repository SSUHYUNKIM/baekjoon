n = int(input())

for i in range(n):
  score = 1
  result = 0
  grade = list(input())
  for j in grade:
    if j == 'O':
      result += score
      score += 1
    else:
      score = 1
  print(result)