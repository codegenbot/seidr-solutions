def shopping_list():
    n = int(input())
    prices = np.array(list(map(float, input().split())))
    discounts = np.array(list(map(float, input().split())))

    return round(np.sum(prices - (prices * discounts / 100)), 2)


print(shopping_list())