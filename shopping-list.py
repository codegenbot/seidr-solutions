n = int(input())
if len(input().split()) != n:
    print("Invalid input. Expected {} lines, got {}".format(n, len(input().split())))
    exit()

prices_discounts = []
for _ in range(n):
    try:
        line = list(map(float, input().split()))
        if len(line) == 2:
            prices_discounts.append([line[0], max(0, min(line[1], 100))])
        else:
            continue
    except ValueError:
        print("Invalid input. Please enter exactly 2 numbers per line.")
        exit()
total_price = sum(price * (1 - discount / 100.0) for price, discount in prices_discounts)
print(format(total_price, ".2f"))