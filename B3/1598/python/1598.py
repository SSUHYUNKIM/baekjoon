a, b = map(int, input().split())
x = (a - 1) // 4 - (b - 1) // 4;
y = (a - 1) % 4 - (b - 1) % 4; 
  
print(abs(x) + abs(y)) 