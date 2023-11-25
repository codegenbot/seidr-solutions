import math

n = int(input())

vector1 = list(map(float, input().split(' ')))
vector2 = list(map(float, input().split(' ')))

difference = [b - a for a, b in zip(vector1, vector2)]
squared_diff = [x ** 2 for x in difference]
sum_squared_diff = sum(squared_diff)
distance = math.sqrt(sum_squared_diff)

print(distance)