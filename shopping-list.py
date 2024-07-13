def get_input():
    while True:
        n = int(input())
        if len(input().split()) == n:
            return n
        print("Invalid input. Please enter {} lines".format(n))


n = get_input()

prices_discounts = []
for _ in range(n):
    line = list(map(float, input().split()))
    prices_discounts.append([line[0], min(line[1], 100)])

total_price = sum(
    price * (1 - discount / 100.0) for price, discount in prices_discounts
)
print(format(total_price, ".2f"))