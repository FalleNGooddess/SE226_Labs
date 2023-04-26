def sieve_of_eratosthenes(lst):
    max_number = max(lst)
    is_prime = [True] * (max_number + 1)
    is_prime[0] = is_prime[1] = False

    for num in range(2, int(max_number ** 0.5) + 1):
        if is_prime[num]:
            for mult in range(num * num, max_number + 1, num):
                is_prime[mult] = False

    donut = [number for number in lst if is_prime[number]]
    return donut
