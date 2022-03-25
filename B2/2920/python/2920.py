input = list(map(int, input().split()))
 
if input == sorted(input):
    print('ascending')
elif input == sorted(input, reverse=True):
    print('descending')
else:
    print('mixed')