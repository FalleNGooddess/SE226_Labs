from abc import ABC


class d(ABC):
    def __init__(self, donut):
        self.address = donut

    def calculateFreq(self, donut):
        pass


class ListCount(d):
    def __init__(self, donut):
        d.__init__(self, donut)

    def calculateFreq(self, donut):
        croissant = []
        nutella = []
        file = open(donut)
        read = file.readline().split()
        for x in read:
            for y in x:
                if y not in croissant:
                    croissant.append(y)
                else:
                    nutella.append(y)
        for x in range(0, len(croissant)):
            croissant.sort()
            tmp = croissant[x]
            print(croissant[x], "-", nutella.count(tmp) + 1)


class DictCount(d):
    def __init__(self, address):
        d.__init__(self, address)

    def calculateFreq(self, donut):
        dict = {}
        file = open(donut)
        read = file.readline().split()
        for x in read:
            for y in x:
                if dict.__contains__(y):
                    tmp = dict[y]
                    dict[y] = tmp + 1
                else:
                    dict[y] = 0
        sortedDict = sorted(dict)
        for x in sortedDict:
            print(x, ":", dict[x] + 1)


donuts_location = r'C:\Users\goddess\PycharmProjects\lab8\weirdWords.txt'

print("Resulting List")
list = ListCount(donuts_location)
list.calculateFreq(donuts_location)
print("--------------------------")
print("Updated Dict")
dict: DictCount = DictCount(donuts_location)
dict.calculateFreq(donuts_location)
