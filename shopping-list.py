n = int(input())
total_price = sum(float(line[0]) * (1 - float(line[1]) / 100.0) for _ in range(n))
print(format(total_price, ".2f"))