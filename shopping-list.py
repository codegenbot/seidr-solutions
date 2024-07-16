def calculate_average(lst):
    return sum(lst) / len(lst)


print("Welcome to the shopping list calculator!")

average = calculate_average([1.0, 2.0, 3.0, 4.0, 5.0])
print(f"Average: {average:.2f}")

print(
    "Now let's calculate the total price of the shopping trip after applying the discount:"
)


def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [float(x) for _ in range(n)]
    for i in range(n):
        discounts[i] = float(input())
    total_price = sum(
        price * (1 - discount) for price, discount in zip(prices, discounts)
    )
    print("{:.2f}".format(total_price))


shopping_list()