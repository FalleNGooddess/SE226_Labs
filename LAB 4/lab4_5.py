divided = {'Tony': 41, 'Rhodey': 43, 'Nat': 35}
we_fall = {'Steve': 39, 'Clint': 35, 'Wanda': 28}

united_we_stand = {**divided, **we_fall}

print("𝒩𝒶𝓂𝑒  " , "  𝒜𝑔𝑒")
for name, age in united_we_stand.items():
    print(name , age)

del united_we_stand['Nat']
print(united_we_stand)

for name in sorted(united_we_stand):
    print(name, united_we_stand[name])

maximum_age = max(united_we_stand.values())
minimum_age = min(united_we_stand.values())

print("𝑀𝒶𝓍𝒾𝓂𝓊𝓂 𝒶𝑔𝑒:", maximum_age)
print("𝑀𝒾𝓃𝒾𝓂𝓊𝓂 𝒜𝑔𝑒:", minimum_age)
