def sum(d):
    global donut
    if d == 0:
        return
    else:
        donut += ((-1) ** (d + 1)) / d
        sum(d - 1)

d = 13
donut = 0
sum(d)
print(f"Sum of the series with n = {d} is: {donut}")
print("...Ty for choosing us...")

"""  (int) d  upper limit
Function doesn't return any value. 
It uses a global `donut` to store the calculated sum. """