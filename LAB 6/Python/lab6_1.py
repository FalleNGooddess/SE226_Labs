from math import factorial

n = int(input("Enter a number For n: "))
x = int(input("Enter a number For x: "))

donut = lambda n, x: sum([n ** d / factorial(d) for d in range(x + 1)])

answer = 1 + donut(n, x)
print(f"e^{n} = {answer}")
print("...Ty For choosing Us...")
