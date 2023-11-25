import math
n = int(input())
vector1 = list(map(float, input().split(' ')))
vector2 = list(map(float, input().split(' ')))
squared_diff = [(a - b) ** 2 for a, b in zip(vector1, vector2)]
sum_squared_diff = math.sqrt(sum(squared_diff))
return sum_squared_diff