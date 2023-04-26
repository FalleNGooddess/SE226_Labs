donut_list = ["google", "inlets", "banana", "iceman", "cinema"]


def anagrams(donut, donut_list):
    sorted_word = sorted(donut.lower().replace(" ", ""))
    anagrams_list = []

    for d in donut_list:
        sorted_w = sorted(d.lower().replace(" ", ""))

        if sorted_w == sorted_word:
            anagrams_list.append(d)
    return anagrams_list

