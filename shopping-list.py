n = int(input())
price_list = list(map(float, input().split()))
discount_list = list(map(float, input().split()))

total_price = 0.0
for i in range(n):
    total_price += price_list[i] * (1 - discount_list[i] / 100)

print("{:.1f}".format(total_price))