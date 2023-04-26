croissant = ["confectionery", "civic", "noon", "sweets", "confection", "toffee", "palindrome", "rotor"]


def getPalindrome_list(croissant: list):
    returned_list = []
    for d in croissant:
        if d == d[::-1]:
            returned_list.append(d)
    return returned_list


print(getPalindrome_list(croissant))
new = []
for d in range(132):
    new.append(d)
