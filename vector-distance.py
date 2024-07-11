n = int(input())
vectors1 = list(map(float, input().split()))
vectors2 = list(map(float, input().split()))

distance = sum((a - b) ** 2 for a, b in zip(vectors1, vectors2)) ** 0.5

print("%.6f" % distance)