def common_list(donut: list, nutella: list):
    nutella_donut = []
    for d in donut:
        if d in nutella and d not in nutella_donut:
            nutella_donut.append(d)
