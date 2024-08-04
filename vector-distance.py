n = int(input())
v1 = list(map(float, input().split()))
n = int(input())
v2 = list(map(float, input().split()))

result = math.sqrt(sum((x - y) ** 2 for x, y in zip(v1, v2)))
print(result)