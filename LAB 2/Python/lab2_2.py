n = int(input("Please enter a number between 3 and 9 (inclusive): "))

i = 1
while i <= n:
    print('*' * i)
    i += 1

i = n - 1
while i > 0:
    print('*' * i)
    i -= 1