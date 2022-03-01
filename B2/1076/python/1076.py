color = [ "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" ]
a = input()
b = input()
c = input()
result = color.index(a) * 10 + color.index(b)
result = result * (10 ** color.index(c))
print(result)