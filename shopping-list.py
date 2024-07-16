n = int(input())
prices = list(map(float, input().split()))
discounts = []

for _ in range(n):
    line = list(map(float, input().split()))
    discounts.append(line[1:])  # append all elements except the first one

def calculate_total_price():
    total_price = sum(
        (price * (100 - d) / 100) for price, *d in zip(prices, *discounts)
    )
    print(format(total_price, ".1f"))


calculate_total_price()