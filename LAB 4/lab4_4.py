duygu = {}
for i in range(1, 31):
    duygu[i] = (i-1) * i
print(duygu)

for key, value in duygu.items():
    print(key, ":", value)

sum_duygu = 0
for value in duygu.values():
    sum_duygu += value
print("Sum of values in Duygu's Dictionary:", sum_duygu)

try:
    number = int(input("Enter a number to REMOVE from Duygu's Dictionary: "))
    if number in duygu:
        del duygu[number]
        print("Removed =", number)
        print(duygu)
    else:
        print("The number is NOT a key")
except ValueError:
    print("Please enter an integer.")
