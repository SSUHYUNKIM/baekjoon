input = int(input())

if input % 4 == 0:
  if input % 100 == 0 and input % 400 != 0:
    print("0")
  else:
    print("1")
else:
  print("0")